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
include tests/CMakeFiles/training_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/training_main.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/training_main.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/training_main.dir/flags.make

tests/CMakeFiles/training_main.dir/codegen:
.PHONY : tests/CMakeFiles/training_main.dir/codegen

tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.obj: tests/CMakeFiles/training_main.dir/flags.make
tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.obj: tests/CMakeFiles/training_main.dir/includes_CXX.rsp
tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.obj: C:/Users/14212/Desktop/C-Project/tests/ExecutorFastTest.cpp
tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.obj: tests/CMakeFiles/training_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\14212\Desktop\C-Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.obj"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.obj -MF CMakeFiles\training_main.dir\ExecutorFastTest.cpp.obj.d -o CMakeFiles\training_main.dir\ExecutorFastTest.cpp.obj -c C:\Users\14212\Desktop\C-Project\tests\ExecutorFastTest.cpp

tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/training_main.dir/ExecutorFastTest.cpp.i"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\14212\Desktop\C-Project\tests\ExecutorFastTest.cpp > CMakeFiles\training_main.dir\ExecutorFastTest.cpp.i

tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/training_main.dir/ExecutorFastTest.cpp.s"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\14212\Desktop\C-Project\tests\ExecutorFastTest.cpp -o CMakeFiles\training_main.dir\ExecutorFastTest.cpp.s

tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.obj: tests/CMakeFiles/training_main.dir/flags.make
tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.obj: tests/CMakeFiles/training_main.dir/includes_CXX.rsp
tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.obj: C:/Users/14212/Desktop/C-Project/tests/ExecutorTest.cpp
tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.obj: tests/CMakeFiles/training_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\14212\Desktop\C-Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.obj"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.obj -MF CMakeFiles\training_main.dir\ExecutorTest.cpp.obj.d -o CMakeFiles\training_main.dir\ExecutorTest.cpp.obj -c C:\Users\14212\Desktop\C-Project\tests\ExecutorTest.cpp

tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/training_main.dir/ExecutorTest.cpp.i"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\14212\Desktop\C-Project\tests\ExecutorTest.cpp > CMakeFiles\training_main.dir\ExecutorTest.cpp.i

tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/training_main.dir/ExecutorTest.cpp.s"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\14212\Desktop\C-Project\tests\ExecutorTest.cpp -o CMakeFiles\training_main.dir\ExecutorTest.cpp.s

tests/CMakeFiles/training_main.dir/PoseEq.cpp.obj: tests/CMakeFiles/training_main.dir/flags.make
tests/CMakeFiles/training_main.dir/PoseEq.cpp.obj: tests/CMakeFiles/training_main.dir/includes_CXX.rsp
tests/CMakeFiles/training_main.dir/PoseEq.cpp.obj: C:/Users/14212/Desktop/C-Project/tests/PoseEq.cpp
tests/CMakeFiles/training_main.dir/PoseEq.cpp.obj: tests/CMakeFiles/training_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\14212\Desktop\C-Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/CMakeFiles/training_main.dir/PoseEq.cpp.obj"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/training_main.dir/PoseEq.cpp.obj -MF CMakeFiles\training_main.dir\PoseEq.cpp.obj.d -o CMakeFiles\training_main.dir\PoseEq.cpp.obj -c C:\Users\14212\Desktop\C-Project\tests\PoseEq.cpp

tests/CMakeFiles/training_main.dir/PoseEq.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/training_main.dir/PoseEq.cpp.i"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\14212\Desktop\C-Project\tests\PoseEq.cpp > CMakeFiles\training_main.dir\PoseEq.cpp.i

tests/CMakeFiles/training_main.dir/PoseEq.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/training_main.dir/PoseEq.cpp.s"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && C:\Users\14212\x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\14212\Desktop\C-Project\tests\PoseEq.cpp -o CMakeFiles\training_main.dir\PoseEq.cpp.s

# Object files for target training_main
training_main_OBJECTS = \
"CMakeFiles/training_main.dir/ExecutorFastTest.cpp.obj" \
"CMakeFiles/training_main.dir/ExecutorTest.cpp.obj" \
"CMakeFiles/training_main.dir/PoseEq.cpp.obj"

# External object files for target training_main
training_main_EXTERNAL_OBJECTS =

tests/training_main.exe: tests/CMakeFiles/training_main.dir/ExecutorFastTest.cpp.obj
tests/training_main.exe: tests/CMakeFiles/training_main.dir/ExecutorTest.cpp.obj
tests/training_main.exe: tests/CMakeFiles/training_main.dir/PoseEq.cpp.obj
tests/training_main.exe: tests/CMakeFiles/training_main.dir/build.make
tests/training_main.exe: src/libtraining.a
tests/training_main.exe: lib/libgtest_main.a
tests/training_main.exe: lib/libgtest.a
tests/training_main.exe: tests/CMakeFiles/training_main.dir/linkLibs.rsp
tests/training_main.exe: tests/CMakeFiles/training_main.dir/objects1.rsp
tests/training_main.exe: tests/CMakeFiles/training_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\14212\Desktop\C-Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable training_main.exe"
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\training_main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/training_main.dir/build: tests/training_main.exe
.PHONY : tests/CMakeFiles/training_main.dir/build

tests/CMakeFiles/training_main.dir/clean:
	cd /d C:\Users\14212\Desktop\C-Project\build\tests && $(CMAKE_COMMAND) -P CMakeFiles\training_main.dir\cmake_clean.cmake
.PHONY : tests/CMakeFiles/training_main.dir/clean

tests/CMakeFiles/training_main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\14212\Desktop\C-Project C:\Users\14212\Desktop\C-Project\tests C:\Users\14212\Desktop\C-Project\build C:\Users\14212\Desktop\C-Project\build\tests C:\Users\14212\Desktop\C-Project\build\tests\CMakeFiles\training_main.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/training_main.dir/depend
