setlocal
set bin_name=WM
set dst_root=__Release__
set dst=%dst_root%\%bin_name%

if exist "%dst_root%" goto end

mkdir	"%dst%"
mkdir	"%dst%\Languages"

copy	"Build\x64\Release\%bin_name%.exe" "%dst%"
copy	"Languages" "%dst%\Languages"

"C:\Program Files\Inno Setup 7\ISCC.exe" --output-dir="%dst_root%" "WM.iss"

::msixpackagingtool create-package --template "MSIX\MSIX.xml" -v

:end

endlocal
pause