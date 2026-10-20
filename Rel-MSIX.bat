setlocal
set bin_name=WM
set dst=__Release__

if exist "%dst%" goto end

mkdir	"%dst%"
mkdir	"%dst%\Languages"
mkdir	"%dst%\Licences"
copy	"Languages"				"%dst%\Languages"
copy	"Licences"				"%dst%\Licences"
copy	"Licence.txt"				"%dst%\Licences"
copy	"Build\x64\Release\%bin_name%.exe"	"%dst%"
copy	"MSIX\Package.appxmanifest"		"%dst%"

winapp manifest update-assets "MSIX\Logo.svg" --manifest "%dst%\Package.appxmanifest"
winapp pack "%dst%" --no-sign

:end

endlocal
pause