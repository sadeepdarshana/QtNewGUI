# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /programs/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /programs/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sadeep/Desktop/srccc/a/code/gsoc/trunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sadeep/Desktop/srccc/a/code/gsoc/trunk

# Utility rule file for arbalest_autogen.

# Include the progress variables for this target.
include src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/progress.make

src/QtNewGUI/CMakeFiles/arbalest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/sadeep/Desktop/srccc/a/code/gsoc/trunk/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target arbalest"
	cd /home/sadeep/Desktop/srccc/a/code/gsoc/trunk/src/QtNewGUI && /programs/clion-2019.1/bin/cmake/linux/bin/cmake -E cmake_autogen /home/sadeep/Desktop/srccc/a/code/gsoc/trunk/src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/AutogenInfo.cmake Debug

arbalest_autogen: src/QtNewGUI/CMakeFiles/arbalest_autogen
arbalest_autogen: src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/build.make

.PHONY : arbalest_autogen

# Rule to build all files generated by this target.
src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/build: arbalest_autogen

.PHONY : src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/build

src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/clean:
	cd /home/sadeep/Desktop/srccc/a/code/gsoc/trunk/src/QtNewGUI && $(CMAKE_COMMAND) -P CMakeFiles/arbalest_autogen.dir/cmake_clean.cmake
.PHONY : src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/clean

src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/depend:
	cd /home/sadeep/Desktop/srccc/a/code/gsoc/trunk && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sadeep/Desktop/srccc/a/code/gsoc/trunk /home/sadeep/Desktop/srccc/a/code/gsoc/trunk/src/QtNewGUI /home/sadeep/Desktop/srccc/a/code/gsoc/trunk /home/sadeep/Desktop/srccc/a/code/gsoc/trunk/src/QtNewGUI /home/sadeep/Desktop/srccc/a/code/gsoc/trunk/src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/QtNewGUI/CMakeFiles/arbalest_autogen.dir/depend

