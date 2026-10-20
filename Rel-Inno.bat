setlocal
set bin_name=WM
set dst_root=__Release__
set dst=%dst_root%\%bin_name%

if exist "%dst_root%" goto end

mkdir	"%dst%"
mkdir	"%dst%\Languages"
mkdir	"%dst%\Licences"
copy	"Languages"				"%dst%\Languages"
copy	"Licences"				"%dst%\Licences"
copy	"Build\x64\Release\%bin_name%.exe"	"%dst%"
copy	"Log.txt"				"%dst%"

"C:\Program Files\Inno Setup 7\ISCC.exe" --output-dir="%dst_root%" "MSIX\WM.iss"

::msixpackagingtool create-package --template "MSIX\MSIX.xml"

:end

endlocal
pause