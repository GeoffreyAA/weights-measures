setlocal
set bin_name=WM
set dst=__Release__

if exist "%dst%" goto end

mkdir	"%dst%"
mkdir	"%dst%\Languages"

copy	"Languages" "%dst%\Languages"
copy	"Build\x64\Release\%bin_name%.exe" "%dst%"
copy	"MSIX\Package.appxmanifest" "%dst%"

winapp pack "%dst%" --verbose

:end

endlocal
pause