# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\ -- cmake-3.31.0-rc3-windows-x86_64\cmake-3.31.0-rc3-windows-x86_64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\ -- cmake-3.31.0-rc3-windows-x86_64\cmake-3.31.0-rc3-windows-x86_64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\14212\Desktop\C-Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\14212\Desktop\C-Project\build

# Include any dependencies generated for this target.
include src/CMakeFiles/training.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/training.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/training.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/training.dir/flags.make

src/CMakeFiles/training.dir/codegen:
.PHONY : src/CMakeFiles/training.dir/codegen

src/CMakeFiles/training.dir/ExecutorImpl.cpp.obj: src/CMakeFiles/training.dir/flags.make
src/CMakeFiles/training.dir/ExecutorImpl.cpp.obj: src/CMakeFiles/training.dir/includes_CXX.rsp
src/CMakeFiles/training.dir/ExecutorImpl.cpp.obj: C:/Users/14212/Desktop/C-Project/src/ExecutorImpl.cpp
src/CMakeFiles/training.dir/ExecutorImpl.cpp.obj: src/CMakeFiles/training.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\14212\Desktop\C-Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/training.dir/ExecutorImpl.cpp.obj"
	cd /d C:\Users\14212\Desktop\C-Project\build\src && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/training.dir/ExecutorImpl.cpp.obj -MF CMakeFiles\training.dir\ExecutorImpl.cpp.obj.d -o CMakeFiles\training.dir\ExecutorImpl.cpp.obj -c C:\Users\14212\Desktop\C-Project\src\ExecutorImpl.cpp

src/CMakeFiles/training.dir/ExecutorImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/training.dir/ExecutorImpl.cpp.i"
	cd /d C:\Users\14212\Desktop\C-Project\build\src && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\14212\Desktop\C-Project\src\ExecutorImpl.cpp > CMakeFiles\training.dir\ExecutorImpl.cpp.i

src/CMakeFiles/training.dir/ExecutorImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/training.dir/ExecutorImpl.cpp.s"
	cd /d C:\Users\14212\Desktop\C-Project\build\src && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\14212\Desktop\C-Project\src\ExecutorImpl.cpp -o CMakeFiles\training.dir\ExecutorImpl.cpp.s

src/CMakeFiles/training.dir/PoseHandler.cpp.obj: src/CMakeFiles/training.dir/flags.make
src/CMakeFiles/training.dir/PoseHandler.cpp.obj: src/CMakeFiles/training.dir/includes_CXX.rsp
src/CMakeFiles/training.dir/PoseHandler.cpp.obj: C:/Users/14212/Desktop/C-Project/src/PoseHandler.cpp
src/CMakeFiles/training.dir/PoseHandler.cpp.obj: src/CMakeFiles/training.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\14212\Desktop\C-Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/training.dir/PoseHandler.cpp.obj"
	cd /d C:\Users\14212\Desktop\C-Project\build\src && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/training.dir/PoseHandler.cpp.obj -MF CMakeFiles\training.dir\PoseHandler.cpp.obj.d -o CMakeFiles\training.dir\PoseHandler.cpp.obj -c C:\Users\14212\Desktop\C-Project\src\PoseHandler.cpp

src/CMakeFiles/training.dir/PoseHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/training.dir/PoseHandler.cpp.i"
	cd /d C:\Users\14212\Desktop\C-Project\build\src && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\14212\Desktop\C-Project\src\PoseHandler.cpp > CMakeFiles\training.dir\PoseHandler.cpp.i

src/CMakeFiles/training.dir/PoseHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/training.dir/PoseHandler.cpp.s"
	cd /d C:\Users\14212\Desktop\C-Project\build\src && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\14212\Desktop\C-Project\src\PoseHandler.cpp -o CMakeFiles\training.dir\PoseHandler.cpp.s

# Object files for target training
training_OBJECTS = \
"CMakeFiles/training.dir/ExecutorImpl.cpp.obj" \
"CMakeFiles/training.dir/PoseHandler.cpp.obj"

# External object files for target training
training_EXTERNAL_OBJECTS =

src/libtraining.a: src/CMakeFiles/training.dir/ExecutorImpl.cpp.obj
src/libtraining.a: src/CMakeFiles/training.dir/PoseHandler.cpp.obj
src/libtraining.a: src/CMakeFiles/training.dir/build.make
src/libtraining.a: src/CMakeFiles/training.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\14212\Desktop\C-Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libtraining.a"
	cd /d C:\Users\14212\Desktop\C-Project\build\src && $(CMAKE_COMMAND) -P CMakeFiles\training.dir\cmake_clean_target.cmake
	cd /d C:\Users\14212\Desktop\C-Project\build\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\training.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/training.dir/build: src/libtraining.a
.PHONY : src/CMakeFiles/training.dir/build

src/CMakeFiles/training.dir/clean:
	cd /d C:\Users\14212\Desktop\C-Project\build\src && $(CMAKE_COMMAND) -P CMakeFiles\training.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/training.dir/clean

src/CMakeFiles/training.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\14212\Desktop\C-Project C:\Users\14212\Desktop\C-Project\src C:\Users\14212\Desktop\C-Project\build C:\Users\14212\Desktop\C-Project\build\src C:\Users\14212\Desktop\C-Project\build\src\CMakeFiles\training.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/training.dir/depend

