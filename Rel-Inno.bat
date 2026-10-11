setlocal
set bin_name=WM
set dst_root=__Release__
set dst=%dst_root%\%bin_name%

if exist "%dst_root%" goto end

mkdir	"%dst%"
mkdir	"%dst%\Languages"
copy	"Languages"				"%dst%\Languages"
copy	"Build\x64\Release\%bin_name%.exe"	"%dst%"
copy	"Licence.txt"				"%dst%"
copy	"Log.txt"				"%dst%"

"C:\Program Files\Inno Setup 7\ISCC.exe" --output-dir="%dst_root%" "MSIX\WM.iss"

::msixpackagingtool create-package --template "MSIX\MSIX.xml"

:end

endlocal
pause