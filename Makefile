# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = C:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\MyCppProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\MyCppProject

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake cache editor..."
	"C:\Program Files\CMake\bin\cmake-gui.exe" -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	C:\msys64\mingw64\bin\cmake.exe --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start D:\MyCppProject\CMakeFiles D:\MyCppProject\\CMakeFiles\progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start D:\MyCppProject\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named MyCppProject

# Build rule for target.
MyCppProject: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 MyCppProject
.PHONY : MyCppProject

# fast build rule for target.
MyCppProject/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/build
.PHONY : MyCppProject/fast

.vscode/about_switch.obj: .vscode/about_switch.cpp.obj
.PHONY : .vscode/about_switch.obj

# target to build an object file
.vscode/about_switch.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/about_switch.cpp.obj
.PHONY : .vscode/about_switch.cpp.obj

.vscode/about_switch.i: .vscode/about_switch.cpp.i
.PHONY : .vscode/about_switch.i

# target to preprocess a source file
.vscode/about_switch.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/about_switch.cpp.i
.PHONY : .vscode/about_switch.cpp.i

.vscode/about_switch.s: .vscode/about_switch.cpp.s
.PHONY : .vscode/about_switch.s

# target to generate assembly for a file
.vscode/about_switch.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/about_switch.cpp.s
.PHONY : .vscode/about_switch.cpp.s

.vscode/arrays.obj: .vscode/arrays.cpp.obj
.PHONY : .vscode/arrays.obj

# target to build an object file
.vscode/arrays.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/arrays.cpp.obj
.PHONY : .vscode/arrays.cpp.obj

.vscode/arrays.i: .vscode/arrays.cpp.i
.PHONY : .vscode/arrays.i

# target to preprocess a source file
.vscode/arrays.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/arrays.cpp.i
.PHONY : .vscode/arrays.cpp.i

.vscode/arrays.s: .vscode/arrays.cpp.s
.PHONY : .vscode/arrays.s

# target to generate assembly for a file
.vscode/arrays.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/arrays.cpp.s
.PHONY : .vscode/arrays.cpp.s

.vscode/calculator.obj: .vscode/calculator.cpp.obj
.PHONY : .vscode/calculator.obj

# target to build an object file
.vscode/calculator.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/calculator.cpp.obj
.PHONY : .vscode/calculator.cpp.obj

.vscode/calculator.i: .vscode/calculator.cpp.i
.PHONY : .vscode/calculator.i

# target to preprocess a source file
.vscode/calculator.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/calculator.cpp.i
.PHONY : .vscode/calculator.cpp.i

.vscode/calculator.s: .vscode/calculator.cpp.s
.PHONY : .vscode/calculator.s

# target to generate assembly for a file
.vscode/calculator.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/calculator.cpp.s
.PHONY : .vscode/calculator.cpp.s

.vscode/cont.obj: .vscode/cont.cpp.obj
.PHONY : .vscode/cont.obj

# target to build an object file
.vscode/cont.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/cont.cpp.obj
.PHONY : .vscode/cont.cpp.obj

.vscode/cont.i: .vscode/cont.cpp.i
.PHONY : .vscode/cont.i

# target to preprocess a source file
.vscode/cont.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/cont.cpp.i
.PHONY : .vscode/cont.cpp.i

.vscode/cont.s: .vscode/cont.cpp.s
.PHONY : .vscode/cont.s

# target to generate assembly for a file
.vscode/cont.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/cont.cpp.s
.PHONY : .vscode/cont.cpp.s

.vscode/debagger.obj: .vscode/debagger.cpp.obj
.PHONY : .vscode/debagger.obj

# target to build an object file
.vscode/debagger.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/debagger.cpp.obj
.PHONY : .vscode/debagger.cpp.obj

.vscode/debagger.i: .vscode/debagger.cpp.i
.PHONY : .vscode/debagger.i

# target to preprocess a source file
.vscode/debagger.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/debagger.cpp.i
.PHONY : .vscode/debagger.cpp.i

.vscode/debagger.s: .vscode/debagger.cpp.s
.PHONY : .vscode/debagger.s

# target to generate assembly for a file
.vscode/debagger.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/debagger.cpp.s
.PHONY : .vscode/debagger.cpp.s

.vscode/dowhile.obj: .vscode/dowhile.cpp.obj
.PHONY : .vscode/dowhile.obj

# target to build an object file
.vscode/dowhile.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/dowhile.cpp.obj
.PHONY : .vscode/dowhile.cpp.obj

.vscode/dowhile.i: .vscode/dowhile.cpp.i
.PHONY : .vscode/dowhile.i

# target to preprocess a source file
.vscode/dowhile.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/dowhile.cpp.i
.PHONY : .vscode/dowhile.cpp.i

.vscode/dowhile.s: .vscode/dowhile.cpp.s
.PHONY : .vscode/dowhile.s

# target to generate assembly for a file
.vscode/dowhile.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/dowhile.cpp.s
.PHONY : .vscode/dowhile.cpp.s

.vscode/enter_sign.obj: .vscode/enter_sign.cpp.obj
.PHONY : .vscode/enter_sign.obj

# target to build an object file
.vscode/enter_sign.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/enter_sign.cpp.obj
.PHONY : .vscode/enter_sign.cpp.obj

.vscode/enter_sign.i: .vscode/enter_sign.cpp.i
.PHONY : .vscode/enter_sign.i

# target to preprocess a source file
.vscode/enter_sign.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/enter_sign.cpp.i
.PHONY : .vscode/enter_sign.cpp.i

.vscode/enter_sign.s: .vscode/enter_sign.cpp.s
.PHONY : .vscode/enter_sign.s

# target to generate assembly for a file
.vscode/enter_sign.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/enter_sign.cpp.s
.PHONY : .vscode/enter_sign.cpp.s

.vscode/for.obj: .vscode/for.cpp.obj
.PHONY : .vscode/for.obj

# target to build an object file
.vscode/for.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/for.cpp.obj
.PHONY : .vscode/for.cpp.obj

.vscode/for.i: .vscode/for.cpp.i
.PHONY : .vscode/for.i

# target to preprocess a source file
.vscode/for.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/for.cpp.i
.PHONY : .vscode/for.cpp.i

.vscode/for.s: .vscode/for.cpp.s
.PHONY : .vscode/for.s

# target to generate assembly for a file
.vscode/for.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/for.cpp.s
.PHONY : .vscode/for.cpp.s

.vscode/goto.obj: .vscode/goto.cpp.obj
.PHONY : .vscode/goto.obj

# target to build an object file
.vscode/goto.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/goto.cpp.obj
.PHONY : .vscode/goto.cpp.obj

.vscode/goto.i: .vscode/goto.cpp.i
.PHONY : .vscode/goto.i

# target to preprocess a source file
.vscode/goto.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/goto.cpp.i
.PHONY : .vscode/goto.cpp.i

.vscode/goto.s: .vscode/goto.cpp.s
.PHONY : .vscode/goto.s

# target to generate assembly for a file
.vscode/goto.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/goto.cpp.s
.PHONY : .vscode/goto.cpp.s

.vscode/nested_loops.obj: .vscode/nested_loops.cpp.obj
.PHONY : .vscode/nested_loops.obj

# target to build an object file
.vscode/nested_loops.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/nested_loops.cpp.obj
.PHONY : .vscode/nested_loops.cpp.obj

.vscode/nested_loops.i: .vscode/nested_loops.cpp.i
.PHONY : .vscode/nested_loops.i

# target to preprocess a source file
.vscode/nested_loops.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/nested_loops.cpp.i
.PHONY : .vscode/nested_loops.cpp.i

.vscode/nested_loops.s: .vscode/nested_loops.cpp.s
.PHONY : .vscode/nested_loops.s

# target to generate assembly for a file
.vscode/nested_loops.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/nested_loops.cpp.s
.PHONY : .vscode/nested_loops.cpp.s

.vscode/nested_loops_copy.obj: .vscode/nested_loops_copy.cpp.obj
.PHONY : .vscode/nested_loops_copy.obj

# target to build an object file
.vscode/nested_loops_copy.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/nested_loops_copy.cpp.obj
.PHONY : .vscode/nested_loops_copy.cpp.obj

.vscode/nested_loops_copy.i: .vscode/nested_loops_copy.cpp.i
.PHONY : .vscode/nested_loops_copy.i

# target to preprocess a source file
.vscode/nested_loops_copy.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/nested_loops_copy.cpp.i
.PHONY : .vscode/nested_loops_copy.cpp.i

.vscode/nested_loops_copy.s: .vscode/nested_loops_copy.cpp.s
.PHONY : .vscode/nested_loops_copy.s

# target to generate assembly for a file
.vscode/nested_loops_copy.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/nested_loops_copy.cpp.s
.PHONY : .vscode/nested_loops_copy.cpp.s

.vscode/parity.obj: .vscode/parity.cpp.obj
.PHONY : .vscode/parity.obj

# target to build an object file
.vscode/parity.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/parity.cpp.obj
.PHONY : .vscode/parity.cpp.obj

.vscode/parity.i: .vscode/parity.cpp.i
.PHONY : .vscode/parity.i

# target to preprocess a source file
.vscode/parity.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/parity.cpp.i
.PHONY : .vscode/parity.cpp.i

.vscode/parity.s: .vscode/parity.cpp.s
.PHONY : .vscode/parity.s

# target to generate assembly for a file
.vscode/parity.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/parity.cpp.s
.PHONY : .vscode/parity.cpp.s

.vscode/while.obj: .vscode/while.cpp.obj
.PHONY : .vscode/while.obj

# target to build an object file
.vscode/while.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/while.cpp.obj
.PHONY : .vscode/while.cpp.obj

.vscode/while.i: .vscode/while.cpp.i
.PHONY : .vscode/while.i

# target to preprocess a source file
.vscode/while.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/while.cpp.i
.PHONY : .vscode/while.cpp.i

.vscode/while.s: .vscode/while.cpp.s
.PHONY : .vscode/while.s

# target to generate assembly for a file
.vscode/while.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/.vscode/while.cpp.s
.PHONY : .vscode/while.cpp.s

boolean.obj: boolean.cpp.obj
.PHONY : boolean.obj

# target to build an object file
boolean.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/boolean.cpp.obj
.PHONY : boolean.cpp.obj

boolean.i: boolean.cpp.i
.PHONY : boolean.i

# target to preprocess a source file
boolean.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/boolean.cpp.i
.PHONY : boolean.cpp.i

boolean.s: boolean.cpp.s
.PHONY : boolean.s

# target to generate assembly for a file
boolean.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/boolean.cpp.s
.PHONY : boolean.cpp.s

debagger.obj: debagger.cpp.obj
.PHONY : debagger.obj

# target to build an object file
debagger.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/debagger.cpp.obj
.PHONY : debagger.cpp.obj

debagger.i: debagger.cpp.i
.PHONY : debagger.i

# target to preprocess a source file
debagger.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/debagger.cpp.i
.PHONY : debagger.cpp.i

debagger.s: debagger.cpp.s
.PHONY : debagger.s

# target to generate assembly for a file
debagger.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/debagger.cpp.s
.PHONY : debagger.cpp.s

ifelse.obj: ifelse.cpp.obj
.PHONY : ifelse.obj

# target to build an object file
ifelse.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/ifelse.cpp.obj
.PHONY : ifelse.cpp.obj

ifelse.i: ifelse.cpp.i
.PHONY : ifelse.i

# target to preprocess a source file
ifelse.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/ifelse.cpp.i
.PHONY : ifelse.cpp.i

ifelse.s: ifelse.cpp.s
.PHONY : ifelse.s

# target to generate assembly for a file
ifelse.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/ifelse.cpp.s
.PHONY : ifelse.cpp.s

main.obj: main.cpp.obj
.PHONY : main.obj

# target to build an object file
main.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/main.cpp.obj
.PHONY : main.cpp.obj

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\MyCppProject.dir\build.make CMakeFiles/MyCppProject.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... MyCppProject
	@echo ... .vscode/about_switch.obj
	@echo ... .vscode/about_switch.i
	@echo ... .vscode/about_switch.s
	@echo ... .vscode/arrays.obj
	@echo ... .vscode/arrays.i
	@echo ... .vscode/arrays.s
	@echo ... .vscode/calculator.obj
	@echo ... .vscode/calculator.i
	@echo ... .vscode/calculator.s
	@echo ... .vscode/cont.obj
	@echo ... .vscode/cont.i
	@echo ... .vscode/cont.s
	@echo ... .vscode/debagger.obj
	@echo ... .vscode/debagger.i
	@echo ... .vscode/debagger.s
	@echo ... .vscode/dowhile.obj
	@echo ... .vscode/dowhile.i
	@echo ... .vscode/dowhile.s
	@echo ... .vscode/enter_sign.obj
	@echo ... .vscode/enter_sign.i
	@echo ... .vscode/enter_sign.s
	@echo ... .vscode/for.obj
	@echo ... .vscode/for.i
	@echo ... .vscode/for.s
	@echo ... .vscode/goto.obj
	@echo ... .vscode/goto.i
	@echo ... .vscode/goto.s
	@echo ... .vscode/nested_loops.obj
	@echo ... .vscode/nested_loops.i
	@echo ... .vscode/nested_loops.s
	@echo ... .vscode/nested_loops_copy.obj
	@echo ... .vscode/nested_loops_copy.i
	@echo ... .vscode/nested_loops_copy.s
	@echo ... .vscode/parity.obj
	@echo ... .vscode/parity.i
	@echo ... .vscode/parity.s
	@echo ... .vscode/while.obj
	@echo ... .vscode/while.i
	@echo ... .vscode/while.s
	@echo ... boolean.obj
	@echo ... boolean.i
	@echo ... boolean.s
	@echo ... debagger.obj
	@echo ... debagger.i
	@echo ... debagger.s
	@echo ... ifelse.obj
	@echo ... ifelse.i
	@echo ... ifelse.s
	@echo ... main.obj
	@echo ... main.i
	@echo ... main.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

