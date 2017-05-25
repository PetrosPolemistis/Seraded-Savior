# Build File. This python script builds the final
# application folder.

import sys
import os
import shutil

dir_Launcher = "Launcher\\Release\\"
dir_LibGraphics = "Library\\lib_graphics\\Release\\"

file_launcher = "Launcher.exe"
file_graphics_dll = "lib_graphics.dll"

build_directory = "SerratedSavior\\"
build_library_directory = build_directory+"Library\\"

if(False == os.path.exists(build_directory)):
	os.mkdir(build_directory)
if(False == os.path.exists(build_library_directory)):
	os.mkdir(build_library_directory)

shutil.copy(dir_Launcher+file_launcher, build_directory+file_launcher)
shutil.copy(dir_LibGraphics+file_graphics_dll, build_library_directory+file_graphics_dll)

exit(0)
