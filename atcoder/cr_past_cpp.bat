@echo off
mkdir .\%1
copy ..\tool\template-basic.cpp .\%1\%1c.cpp
copy ..\tool\template-basic.cpp .\%1\%1d.cpp
copy ..\tool\template.cpp .\%1\%1e.cpp
copy ..\tool\g.bat .\%1\g.bat
