# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/david/Git/programmiersprachen-abgabe-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/david/Git/programmiersprachen-abgabe-2/build

# Include any dependencies generated for this target.
include source/CMakeFiles/tests.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/tests.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/tests.dir/flags.make

source/CMakeFiles/tests.dir/vec2.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/vec2.cpp.o: ../source/vec2.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/david/Git/programmiersprachen-abgabe-2/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object source/CMakeFiles/tests.dir/vec2.cpp.o"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/vec2.cpp.o -c /home/david/Git/programmiersprachen-abgabe-2/source/vec2.cpp

source/CMakeFiles/tests.dir/vec2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/vec2.cpp.i"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/david/Git/programmiersprachen-abgabe-2/source/vec2.cpp > CMakeFiles/tests.dir/vec2.cpp.i

source/CMakeFiles/tests.dir/vec2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/vec2.cpp.s"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/david/Git/programmiersprachen-abgabe-2/source/vec2.cpp -o CMakeFiles/tests.dir/vec2.cpp.s

source/CMakeFiles/tests.dir/vec2.cpp.o.requires:
.PHONY : source/CMakeFiles/tests.dir/vec2.cpp.o.requires

source/CMakeFiles/tests.dir/vec2.cpp.o.provides: source/CMakeFiles/tests.dir/vec2.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/tests.dir/build.make source/CMakeFiles/tests.dir/vec2.cpp.o.provides.build
.PHONY : source/CMakeFiles/tests.dir/vec2.cpp.o.provides

source/CMakeFiles/tests.dir/vec2.cpp.o.provides.build: source/CMakeFiles/tests.dir/vec2.cpp.o

source/CMakeFiles/tests.dir/mat2.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/mat2.cpp.o: ../source/mat2.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/david/Git/programmiersprachen-abgabe-2/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object source/CMakeFiles/tests.dir/mat2.cpp.o"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/mat2.cpp.o -c /home/david/Git/programmiersprachen-abgabe-2/source/mat2.cpp

source/CMakeFiles/tests.dir/mat2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/mat2.cpp.i"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/david/Git/programmiersprachen-abgabe-2/source/mat2.cpp > CMakeFiles/tests.dir/mat2.cpp.i

source/CMakeFiles/tests.dir/mat2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/mat2.cpp.s"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/david/Git/programmiersprachen-abgabe-2/source/mat2.cpp -o CMakeFiles/tests.dir/mat2.cpp.s

source/CMakeFiles/tests.dir/mat2.cpp.o.requires:
.PHONY : source/CMakeFiles/tests.dir/mat2.cpp.o.requires

source/CMakeFiles/tests.dir/mat2.cpp.o.provides: source/CMakeFiles/tests.dir/mat2.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/tests.dir/build.make source/CMakeFiles/tests.dir/mat2.cpp.o.provides.build
.PHONY : source/CMakeFiles/tests.dir/mat2.cpp.o.provides

source/CMakeFiles/tests.dir/mat2.cpp.o.provides.build: source/CMakeFiles/tests.dir/mat2.cpp.o

source/CMakeFiles/tests.dir/circle.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/circle.cpp.o: ../source/circle.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/david/Git/programmiersprachen-abgabe-2/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object source/CMakeFiles/tests.dir/circle.cpp.o"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/circle.cpp.o -c /home/david/Git/programmiersprachen-abgabe-2/source/circle.cpp

source/CMakeFiles/tests.dir/circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/circle.cpp.i"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/david/Git/programmiersprachen-abgabe-2/source/circle.cpp > CMakeFiles/tests.dir/circle.cpp.i

source/CMakeFiles/tests.dir/circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/circle.cpp.s"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/david/Git/programmiersprachen-abgabe-2/source/circle.cpp -o CMakeFiles/tests.dir/circle.cpp.s

source/CMakeFiles/tests.dir/circle.cpp.o.requires:
.PHONY : source/CMakeFiles/tests.dir/circle.cpp.o.requires

source/CMakeFiles/tests.dir/circle.cpp.o.provides: source/CMakeFiles/tests.dir/circle.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/tests.dir/build.make source/CMakeFiles/tests.dir/circle.cpp.o.provides.build
.PHONY : source/CMakeFiles/tests.dir/circle.cpp.o.provides

source/CMakeFiles/tests.dir/circle.cpp.o.provides.build: source/CMakeFiles/tests.dir/circle.cpp.o

source/CMakeFiles/tests.dir/rectangle.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/rectangle.cpp.o: ../source/rectangle.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/david/Git/programmiersprachen-abgabe-2/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object source/CMakeFiles/tests.dir/rectangle.cpp.o"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/rectangle.cpp.o -c /home/david/Git/programmiersprachen-abgabe-2/source/rectangle.cpp

source/CMakeFiles/tests.dir/rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/rectangle.cpp.i"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/david/Git/programmiersprachen-abgabe-2/source/rectangle.cpp > CMakeFiles/tests.dir/rectangle.cpp.i

source/CMakeFiles/tests.dir/rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/rectangle.cpp.s"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/david/Git/programmiersprachen-abgabe-2/source/rectangle.cpp -o CMakeFiles/tests.dir/rectangle.cpp.s

source/CMakeFiles/tests.dir/rectangle.cpp.o.requires:
.PHONY : source/CMakeFiles/tests.dir/rectangle.cpp.o.requires

source/CMakeFiles/tests.dir/rectangle.cpp.o.provides: source/CMakeFiles/tests.dir/rectangle.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/tests.dir/build.make source/CMakeFiles/tests.dir/rectangle.cpp.o.provides.build
.PHONY : source/CMakeFiles/tests.dir/rectangle.cpp.o.provides

source/CMakeFiles/tests.dir/rectangle.cpp.o.provides.build: source/CMakeFiles/tests.dir/rectangle.cpp.o

source/CMakeFiles/tests.dir/glew.c.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/glew.c.o: ../source/glew.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/david/Git/programmiersprachen-abgabe-2/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object source/CMakeFiles/tests.dir/glew.c.o"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/tests.dir/glew.c.o   -c /home/david/Git/programmiersprachen-abgabe-2/source/glew.c

source/CMakeFiles/tests.dir/glew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tests.dir/glew.c.i"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/david/Git/programmiersprachen-abgabe-2/source/glew.c > CMakeFiles/tests.dir/glew.c.i

source/CMakeFiles/tests.dir/glew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tests.dir/glew.c.s"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/david/Git/programmiersprachen-abgabe-2/source/glew.c -o CMakeFiles/tests.dir/glew.c.s

source/CMakeFiles/tests.dir/glew.c.o.requires:
.PHONY : source/CMakeFiles/tests.dir/glew.c.o.requires

source/CMakeFiles/tests.dir/glew.c.o.provides: source/CMakeFiles/tests.dir/glew.c.o.requires
	$(MAKE) -f source/CMakeFiles/tests.dir/build.make source/CMakeFiles/tests.dir/glew.c.o.provides.build
.PHONY : source/CMakeFiles/tests.dir/glew.c.o.provides

source/CMakeFiles/tests.dir/glew.c.o.provides.build: source/CMakeFiles/tests.dir/glew.c.o

source/CMakeFiles/tests.dir/window.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/window.cpp.o: ../source/window.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/david/Git/programmiersprachen-abgabe-2/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object source/CMakeFiles/tests.dir/window.cpp.o"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/window.cpp.o -c /home/david/Git/programmiersprachen-abgabe-2/source/window.cpp

source/CMakeFiles/tests.dir/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/window.cpp.i"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/david/Git/programmiersprachen-abgabe-2/source/window.cpp > CMakeFiles/tests.dir/window.cpp.i

source/CMakeFiles/tests.dir/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/window.cpp.s"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/david/Git/programmiersprachen-abgabe-2/source/window.cpp -o CMakeFiles/tests.dir/window.cpp.s

source/CMakeFiles/tests.dir/window.cpp.o.requires:
.PHONY : source/CMakeFiles/tests.dir/window.cpp.o.requires

source/CMakeFiles/tests.dir/window.cpp.o.provides: source/CMakeFiles/tests.dir/window.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/tests.dir/build.make source/CMakeFiles/tests.dir/window.cpp.o.provides.build
.PHONY : source/CMakeFiles/tests.dir/window.cpp.o.provides

source/CMakeFiles/tests.dir/window.cpp.o.provides.build: source/CMakeFiles/tests.dir/window.cpp.o

source/CMakeFiles/tests.dir/tests.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/tests.cpp.o: ../source/tests.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/david/Git/programmiersprachen-abgabe-2/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object source/CMakeFiles/tests.dir/tests.cpp.o"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/tests.cpp.o -c /home/david/Git/programmiersprachen-abgabe-2/source/tests.cpp

source/CMakeFiles/tests.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/tests.cpp.i"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/david/Git/programmiersprachen-abgabe-2/source/tests.cpp > CMakeFiles/tests.dir/tests.cpp.i

source/CMakeFiles/tests.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/tests.cpp.s"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/david/Git/programmiersprachen-abgabe-2/source/tests.cpp -o CMakeFiles/tests.dir/tests.cpp.s

source/CMakeFiles/tests.dir/tests.cpp.o.requires:
.PHONY : source/CMakeFiles/tests.dir/tests.cpp.o.requires

source/CMakeFiles/tests.dir/tests.cpp.o.provides: source/CMakeFiles/tests.dir/tests.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/tests.dir/build.make source/CMakeFiles/tests.dir/tests.cpp.o.provides.build
.PHONY : source/CMakeFiles/tests.dir/tests.cpp.o.provides

source/CMakeFiles/tests.dir/tests.cpp.o.provides.build: source/CMakeFiles/tests.dir/tests.cpp.o

# Object files for target tests
tests_OBJECTS = \
"CMakeFiles/tests.dir/vec2.cpp.o" \
"CMakeFiles/tests.dir/mat2.cpp.o" \
"CMakeFiles/tests.dir/circle.cpp.o" \
"CMakeFiles/tests.dir/rectangle.cpp.o" \
"CMakeFiles/tests.dir/glew.c.o" \
"CMakeFiles/tests.dir/window.cpp.o" \
"CMakeFiles/tests.dir/tests.cpp.o"

# External object files for target tests
tests_EXTERNAL_OBJECTS =

source/tests: source/CMakeFiles/tests.dir/vec2.cpp.o
source/tests: source/CMakeFiles/tests.dir/mat2.cpp.o
source/tests: source/CMakeFiles/tests.dir/circle.cpp.o
source/tests: source/CMakeFiles/tests.dir/rectangle.cpp.o
source/tests: source/CMakeFiles/tests.dir/glew.c.o
source/tests: source/CMakeFiles/tests.dir/window.cpp.o
source/tests: source/CMakeFiles/tests.dir/tests.cpp.o
source/tests: source/CMakeFiles/tests.dir/build.make
source/tests: external/glfw-3.2.1/src/libglfw3.a
source/tests: libnanovg.a
source/tests: /usr/lib/x86_64-linux-gnu/libGLU.so
source/tests: /usr/lib/x86_64-linux-gnu/libGL.so
source/tests: /usr/lib/x86_64-linux-gnu/libSM.so
source/tests: /usr/lib/x86_64-linux-gnu/libICE.so
source/tests: /usr/lib/x86_64-linux-gnu/libX11.so
source/tests: /usr/lib/x86_64-linux-gnu/libXext.so
source/tests: /usr/lib/x86_64-linux-gnu/librt.so
source/tests: /usr/lib/x86_64-linux-gnu/libm.so
source/tests: /usr/lib/x86_64-linux-gnu/libXrandr.so
source/tests: /usr/lib/x86_64-linux-gnu/libXinerama.so
source/tests: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
source/tests: /usr/lib/x86_64-linux-gnu/libXcursor.so
source/tests: /usr/lib/x86_64-linux-gnu/libX11.so
source/tests: source/CMakeFiles/tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable tests"
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/tests.dir/build: source/tests
.PHONY : source/CMakeFiles/tests.dir/build

source/CMakeFiles/tests.dir/requires: source/CMakeFiles/tests.dir/vec2.cpp.o.requires
source/CMakeFiles/tests.dir/requires: source/CMakeFiles/tests.dir/mat2.cpp.o.requires
source/CMakeFiles/tests.dir/requires: source/CMakeFiles/tests.dir/circle.cpp.o.requires
source/CMakeFiles/tests.dir/requires: source/CMakeFiles/tests.dir/rectangle.cpp.o.requires
source/CMakeFiles/tests.dir/requires: source/CMakeFiles/tests.dir/glew.c.o.requires
source/CMakeFiles/tests.dir/requires: source/CMakeFiles/tests.dir/window.cpp.o.requires
source/CMakeFiles/tests.dir/requires: source/CMakeFiles/tests.dir/tests.cpp.o.requires
.PHONY : source/CMakeFiles/tests.dir/requires

source/CMakeFiles/tests.dir/clean:
	cd /home/david/Git/programmiersprachen-abgabe-2/build/source && $(CMAKE_COMMAND) -P CMakeFiles/tests.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/tests.dir/clean

source/CMakeFiles/tests.dir/depend:
	cd /home/david/Git/programmiersprachen-abgabe-2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/david/Git/programmiersprachen-abgabe-2 /home/david/Git/programmiersprachen-abgabe-2/source /home/david/Git/programmiersprachen-abgabe-2/build /home/david/Git/programmiersprachen-abgabe-2/build/source /home/david/Git/programmiersprachen-abgabe-2/build/source/CMakeFiles/tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/tests.dir/depend

