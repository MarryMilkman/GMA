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
CMAKE_SOURCE_DIR = /C/all_with_prog/GrantMA/ex2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /C/all_with_prog/GrantMA/ex2/build

# Include any dependencies generated for this target.
include CMakeFiles/server_client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/server_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/server_client.dir/flags.make

CMakeFiles/server_client.dir/src/main.cpp.obj: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/main.cpp.obj: CMakeFiles/server_client.dir/includes_CXX.rsp
CMakeFiles/server_client.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/C/all_with_prog/GrantMA/ex2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/server_client.dir/src/main.cpp.obj"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/main.cpp.obj -c /C/all_with_prog/GrantMA/ex2/src/main.cpp

CMakeFiles/server_client.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/main.cpp.i"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /C/all_with_prog/GrantMA/ex2/src/main.cpp > CMakeFiles/server_client.dir/src/main.cpp.i

CMakeFiles/server_client.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/main.cpp.s"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /C/all_with_prog/GrantMA/ex2/src/main.cpp -o CMakeFiles/server_client.dir/src/main.cpp.s

CMakeFiles/server_client.dir/src/Dollar.cpp.obj: CMakeFiles/server_client.dir/flags.make
CMakeFiles/server_client.dir/src/Dollar.cpp.obj: CMakeFiles/server_client.dir/includes_CXX.rsp
CMakeFiles/server_client.dir/src/Dollar.cpp.obj: ../src/Dollar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/C/all_with_prog/GrantMA/ex2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/server_client.dir/src/Dollar.cpp.obj"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_client.dir/src/Dollar.cpp.obj -c /C/all_with_prog/GrantMA/ex2/src/Dollar.cpp

CMakeFiles/server_client.dir/src/Dollar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_client.dir/src/Dollar.cpp.i"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /C/all_with_prog/GrantMA/ex2/src/Dollar.cpp > CMakeFiles/server_client.dir/src/Dollar.cpp.i

CMakeFiles/server_client.dir/src/Dollar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_client.dir/src/Dollar.cpp.s"
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /C/all_with_prog/GrantMA/ex2/src/Dollar.cpp -o CMakeFiles/server_client.dir/src/Dollar.cpp.s

# Object files for target server_client
server_client_OBJECTS = \
"CMakeFiles/server_client.dir/src/main.cpp.obj" \
"CMakeFiles/server_client.dir/src/Dollar.cpp.obj"

# External object files for target server_client
server_client_EXTERNAL_OBJECTS =

server_client.exe: CMakeFiles/server_client.dir/src/main.cpp.obj
server_client.exe: CMakeFiles/server_client.dir/src/Dollar.cpp.obj
server_client.exe: CMakeFiles/server_client.dir/build.make
server_client.exe: CMakeFiles/server_client.dir/linklibs.rsp
server_client.exe: CMakeFiles/server_client.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/C/all_with_prog/GrantMA/ex2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable server_client.exe"
	/C/all_with_prog/plugins/cmake/bin/cmake.exe -E remove -f CMakeFiles/server_client.dir/objects.a
	/C/all_with_prog/plugins/mingw/mingw32/bin/ar.exe cr CMakeFiles/server_client.dir/objects.a @CMakeFiles/server_client.dir/objects1.rsp
	/C/all_with_prog/plugins/mingw/mingw32/bin/g++.exe  -std=c++11 -lpthread   -Wl,--whole-archive CMakeFiles/server_client.dir/objects.a -Wl,--no-whole-archive  -o server_client.exe -Wl,--out-implib,libserver_client.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/server_client.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/server_client.dir/build: server_client.exe

.PHONY : CMakeFiles/server_client.dir/build

CMakeFiles/server_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/server_client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/server_client.dir/clean

CMakeFiles/server_client.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /C/all_with_prog/GrantMA/ex2 /C/all_with_prog/GrantMA/ex2 /C/all_with_prog/GrantMA/ex2/build /C/all_with_prog/GrantMA/ex2/build /C/all_with_prog/GrantMA/ex2/build/CMakeFiles/server_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/server_client.dir/depend
