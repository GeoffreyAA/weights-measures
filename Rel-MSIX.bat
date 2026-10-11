setlocal
set bin_name=WM
set dst=__Release__

if exist "%dst%" goto end

mkdir	"%dst%"
mkdir	"%dst%\Languages"
copy	"Languages"				"%dst%\Languages"
copy	"Build\x64\Release\%bin_name%.exe"	"%dst%"
copy	"MSIX\Package.appxmanifest"		"%dst%"

winapp manifest update-assets "MSIX\Logo.svg" --manifest "%dst%\Package.appxmanifest" --verbose
winapp pack "%dst%" --no-sign --verbose

:end

endlocal
pause