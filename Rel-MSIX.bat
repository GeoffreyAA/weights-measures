setlocal
set bin_name=WM
set dst=__Release__

if exist "%dst%" goto end

mkdir	"%dst%"
mkdir	"%dst%\Languages"
copy	"Languages" "%dst%\Languages"
copy	"Build\x64\Release\%bin_name%.exe" "%dst%"

mkdir	"%dst%\Assets"
copy	"MSIX\Assets" "%dst%\Assets"
copy	"MSIX\Package.appxmanifest" "%dst%"

winapp pack "%dst%" --verbose

:end

endlocal
pause