# CMAKE generated file: DO NOT EDIT!
# Generated by "MSYS Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /C/all_with_prog/plugins/cmake/bin/cmake.exe

# The command to remove a file.
RM = /C/all_with_prog/plugins/cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /C/all_with_prog/GrantMA/GMA/ex1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /C/all_with_prog/GrantMA/GMA/ex1/build

# Include any dependencies generated for this target.
include CMakeFiles/ex1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex1.dir/flags.make

CMakeFiles/ex1.dir/src/main.cpp.obj: CMakeFiles/ex1.dir/flags.make
CMakeFiles/ex1.dir/src/main.cpp.obj: CMakeFiles/ex1.dir/includes_CXX.rsp
CMakeFiles/ex1.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/C/all_with_prog/GrantMA/GMA/ex1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex1.dir/src/main.cpp.obj"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex1.dir/src/main.cpp.obj -c /C/all_with_prog/GrantMA/GMA/ex1/src/main.cpp

CMakeFiles/ex1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex1.dir/src/main.cpp.i"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /C/all_with_prog/GrantMA/GMA/ex1/src/main.cpp > CMakeFiles/ex1.dir/src/main.cpp.i

CMakeFiles/ex1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex1.dir/src/main.cpp.s"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /C/all_with_prog/GrantMA/GMA/ex1/src/main.cpp -o CMakeFiles/ex1.dir/src/main.cpp.s

CMakeFiles/ex1.dir/src/get_dest_data.cpp.obj: CMakeFiles/ex1.dir/flags.make
CMakeFiles/ex1.dir/src/get_dest_data.cpp.obj: CMakeFiles/ex1.dir/includes_CXX.rsp
CMakeFiles/ex1.dir/src/get_dest_data.cpp.obj: ../src/get_dest_data.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/C/all_with_prog/GrantMA/GMA/ex1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex1.dir/src/get_dest_data.cpp.obj"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex1.dir/src/get_dest_data.cpp.obj -c /C/all_with_prog/GrantMA/GMA/ex1/src/get_dest_data.cpp

CMakeFiles/ex1.dir/src/get_dest_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex1.dir/src/get_dest_data.cpp.i"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /C/all_with_prog/GrantMA/GMA/ex1/src/get_dest_data.cpp > CMakeFiles/ex1.dir/src/get_dest_data.cpp.i

CMakeFiles/ex1.dir/src/get_dest_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex1.dir/src/get_dest_data.cpp.s"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /C/all_with_prog/GrantMA/GMA/ex1/src/get_dest_data.cpp -o CMakeFiles/ex1.dir/src/get_dest_data.cpp.s

# Object files for target ex1
ex1_OBJECTS = \
"CMakeFiles/ex1.dir/src/main.cpp.obj" \
"CMakeFiles/ex1.dir/src/get_dest_data.cpp.obj"

# External object files for target ex1
ex1_EXTERNAL_OBJECTS =

ex1.exe: CMakeFiles/ex1.dir/src/main.cpp.obj
ex1.exe: CMakeFiles/ex1.dir/src/get_dest_data.cpp.obj
ex1.exe: CMakeFiles/ex1.dir/build.make
ex1.exe: CMakeFiles/ex1.dir/linklibs.rsp
ex1.exe: CMakeFiles/ex1.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/C/all_with_prog/GrantMA/GMA/ex1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ex1.exe"
	/C/all_with_prog/plugins/cmake/bin/cmake.exe -E remove -f CMakeFiles/ex1.dir/objects.a
	/C/all_with_prog/plugins/mingw/mingw32/bin/ar.exe cr CMakeFiles/ex1.dir/objects.a @CMakeFiles/ex1.dir/objects1.rsp
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe  -std=c++11 -lpthread   -Wl,--whole-archive CMakeFiles/ex1.dir/objects.a -Wl,--no-whole-archive  -o ex1.exe -Wl,--out-implib,libex1.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/ex1.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/ex1.dir/build: ex1.exe

.PHONY : CMakeFiles/ex1.dir/build

CMakeFiles/ex1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex1.dir/clean

CMakeFiles/ex1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /C/all_with_prog/GrantMA/GMA/ex1 /C/all_with_prog/GrantMA/GMA/ex1 /C/all_with_prog/GrantMA/GMA/ex1/build /C/all_with_prog/GrantMA/GMA/ex1/build /C/all_with_prog/GrantMA/GMA/ex1/build/CMakeFiles/ex1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex1.dir/depend

