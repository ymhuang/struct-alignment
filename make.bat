call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\Vc\bin\x86_amd64\vcvarsx86_amd64.bat"

"C:\Program Files (x86)\Microsoft Visual Studio 12.0\Vc\bin\x86_amd64\cl.exe" structure.c /I"C:\Program Files (x86)\Microsoft Visual Studio 12.0\Vc\Include" /Fe:StructNoZp.exe

"C:\Program Files (x86)\Microsoft Visual Studio 12.0\Vc\bin\x86_amd64\cl.exe" structure.c /I"C:\Program Files (x86)\Microsoft Visual Studio 12.0\Vc\Include" /Zp1 /Fe:StructZp1.exe
