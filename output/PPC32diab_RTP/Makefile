# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC32diab_RTP
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
PRJ_ROOT_DIR := C:/WindRiver/workspace/output
WS_ROOT_DIR := C:/WindRiver/workspace



#Global Build Macros
PROJECT_TYPE = RTP
DEFINES = 
DO_STRIP = 0
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCEH:rtp
LIBPATH = 
LIBS = -lstlstd

IDE_INCLUDES = -I$(WIND_BASE)/target/usr/h -I$(WIND_BASE)/target/usr/h/wrn/coreip -I$(PRJ_ROOT_DIR) 

IDE_LIBRARIES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -XO 
DEBUGFLAGS_C++-Compiler = -XO 
DEBUGFLAGS_Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -XO 
endif


#Project Targets
PROJECT_TARGETS = output/$(MODE_DIR)/output.vxe


#Rules

# output
ifeq ($(DEBUG_MODE),1)
output/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
output/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
output/$(MODE_DIR)/% : DEBUGFLAGS_Linker = 
output/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
output/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
output/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO 
output/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO 
output/$(MODE_DIR)/% : DEBUGFLAGS_Linker = 
output/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
output/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO 
endif
output/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/usr/h -I$(WIND_BASE)/target/usr/h/wrn/coreip -I$(PRJ_ROOT_DIR) 
output/$(MODE_DIR)/% : IDE_LIBRARIES = 
output/$(MODE_DIR)/% : PROJECT_TYPE = RTP
output/$(MODE_DIR)/% : DEFINES = 
output/$(MODE_DIR)/% : DO_STRIP = 0
output/$(MODE_DIR)/% : EXPAND_DBG = 0
output/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
output/$(MODE_DIR)/% : CPU = PPC32
output/$(MODE_DIR)/% : TOOL_FAMILY = diab
output/$(MODE_DIR)/% : TOOL = diab
output/$(MODE_DIR)/% : TOOL_PATH = 
output/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCEH:rtp
output/$(MODE_DIR)/% : LIBPATH = 
output/$(MODE_DIR)/% : LIBS = -lstlstd
output/$(MODE_DIR)/% : OBJ_DIR := output/$(MODE_DIR)

output/$(MODE_DIR)/Objects/output/ADXL345_I2C.o : C:/WindRiver/workspace/output/ADXL345_I2C.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/ADXL345_SPI.o : C:/WindRiver/workspace/output/ADXL345_SPI.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Accelerometer.o : C:/WindRiver/workspace/output/Accelerometer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/AnalogChannel.o : C:/WindRiver/workspace/output/AnalogChannel.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/AnalogModule.o : C:/WindRiver/workspace/output/AnalogModule.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/AnalogTrigger.o : C:/WindRiver/workspace/output/AnalogTrigger.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/AnalogTriggerOutput.o : C:/WindRiver/workspace/output/AnalogTriggerOutput.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/AnalogIOButton.o : C:/WindRiver/workspace/output/Buttons/AnalogIOButton.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/Button.o : C:/WindRiver/workspace/output/Buttons/Button.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/ButtonScheduler.o : C:/WindRiver/workspace/output/Buttons/ButtonScheduler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/DigitalIOButton.o : C:/WindRiver/workspace/output/Buttons/DigitalIOButton.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/HeldButtonScheduler.o : C:/WindRiver/workspace/output/Buttons/HeldButtonScheduler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/InternalButton.o : C:/WindRiver/workspace/output/Buttons/InternalButton.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/JoystickButton.o : C:/WindRiver/workspace/output/Buttons/JoystickButton.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/NetworkButton.o : C:/WindRiver/workspace/output/Buttons/NetworkButton.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/PressedButtonScheduler.o : C:/WindRiver/workspace/output/Buttons/PressedButtonScheduler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/ReleasedButtonScheduler.o : C:/WindRiver/workspace/output/Buttons/ReleasedButtonScheduler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Buttons/Trigger.o : C:/WindRiver/workspace/output/Buttons/Trigger.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/CANJaguar.o : C:/WindRiver/workspace/output/CANJaguar.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/Command.o : C:/WindRiver/workspace/output/Commands/Command.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/CommandGroup.o : C:/WindRiver/workspace/output/Commands/CommandGroup.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/CommandGroupEntry.o : C:/WindRiver/workspace/output/Commands/CommandGroupEntry.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/PIDCommand.o : C:/WindRiver/workspace/output/Commands/PIDCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/PIDSubsystem.o : C:/WindRiver/workspace/output/Commands/PIDSubsystem.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/PrintCommand.o : C:/WindRiver/workspace/output/Commands/PrintCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/Scheduler.o : C:/WindRiver/workspace/output/Commands/Scheduler.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/StartCommand.o : C:/WindRiver/workspace/output/Commands/StartCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/Subsystem.o : C:/WindRiver/workspace/output/Commands/Subsystem.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/WaitCommand.o : C:/WindRiver/workspace/output/Commands/WaitCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/WaitForChildren.o : C:/WindRiver/workspace/output/Commands/WaitForChildren.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Commands/WaitUntilCommand.o : C:/WindRiver/workspace/output/Commands/WaitUntilCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Compressor.o : C:/WindRiver/workspace/output/Compressor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Counter.o : C:/WindRiver/workspace/output/Counter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Dashboard.o : C:/WindRiver/workspace/output/Dashboard.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/DigitalInput.o : C:/WindRiver/workspace/output/DigitalInput.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/DigitalModule.o : C:/WindRiver/workspace/output/DigitalModule.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/DigitalOutput.o : C:/WindRiver/workspace/output/DigitalOutput.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/DigitalSource.o : C:/WindRiver/workspace/output/DigitalSource.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/DoubleSolenoid.o : C:/WindRiver/workspace/output/DoubleSolenoid.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/DriverStation.o : C:/WindRiver/workspace/output/DriverStation.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/DriverStationEnhancedIO.o : C:/WindRiver/workspace/output/DriverStationEnhancedIO.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/DriverStationLCD.o : C:/WindRiver/workspace/output/DriverStationLCD.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Encoder.o : C:/WindRiver/workspace/output/Encoder.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Error.o : C:/WindRiver/workspace/output/Error.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/ErrorBase.o : C:/WindRiver/workspace/output/ErrorBase.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/GearTooth.o : C:/WindRiver/workspace/output/GearTooth.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Gyro.o : C:/WindRiver/workspace/output/Gyro.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/HiTechnicColorSensor.o : C:/WindRiver/workspace/output/HiTechnicColorSensor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/HiTechnicCompass.o : C:/WindRiver/workspace/output/HiTechnicCompass.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/I2C.o : C:/WindRiver/workspace/output/I2C.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/InterruptableSensorBase.o : C:/WindRiver/workspace/output/InterruptableSensorBase.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/IterativeRobot.o : C:/WindRiver/workspace/output/IterativeRobot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Jaguar.o : C:/WindRiver/workspace/output/Jaguar.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Joystick.o : C:/WindRiver/workspace/output/Joystick.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Kinect.o : C:/WindRiver/workspace/output/Kinect.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/KinectStick.o : C:/WindRiver/workspace/output/KinectStick.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/LiveWindow/LiveWindow.o : C:/WindRiver/workspace/output/LiveWindow/LiveWindow.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/LiveWindow/LiveWindowStatusListener.o : C:/WindRiver/workspace/output/LiveWindow/LiveWindowStatusListener.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Module.o : C:/WindRiver/workspace/output/Module.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/MotorSafetyHelper.o : C:/WindRiver/workspace/output/MotorSafetyHelper.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Notifier.o : C:/WindRiver/workspace/output/Notifier.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/PIDController.o : C:/WindRiver/workspace/output/PIDController.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/PWM.o : C:/WindRiver/workspace/output/PWM.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Preferences.o : C:/WindRiver/workspace/output/Preferences.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Relay.o : C:/WindRiver/workspace/output/Relay.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Resource.o : C:/WindRiver/workspace/output/Resource.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/RobotBase.o : C:/WindRiver/workspace/output/RobotBase.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/RobotDrive.o : C:/WindRiver/workspace/output/RobotDrive.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/SPI.o : C:/WindRiver/workspace/output/SPI.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/SafePWM.o : C:/WindRiver/workspace/output/SafePWM.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/SensorBase.o : C:/WindRiver/workspace/output/SensorBase.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/SerialPort.o : C:/WindRiver/workspace/output/SerialPort.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Servo.o : C:/WindRiver/workspace/output/Servo.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/SimpleRobot.o : C:/WindRiver/workspace/output/SimpleRobot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/SmartDashboard/SendableChooser.o : C:/WindRiver/workspace/output/SmartDashboard/SendableChooser.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/SmartDashboard/SmartDashboard.o : C:/WindRiver/workspace/output/SmartDashboard/SmartDashboard.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Solenoid.o : C:/WindRiver/workspace/output/Solenoid.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/SolenoidBase.o : C:/WindRiver/workspace/output/SolenoidBase.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Synchronized.o : C:/WindRiver/workspace/output/Synchronized.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Talon.o : C:/WindRiver/workspace/output/Talon.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Task.o : C:/WindRiver/workspace/output/Task.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Timer.o : C:/WindRiver/workspace/output/Timer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Ultrasonic.o : C:/WindRiver/workspace/output/Ultrasonic.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Utility.o : C:/WindRiver/workspace/output/Utility.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Victor.o : C:/WindRiver/workspace/output/Victor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/AxisCamera.o : C:/WindRiver/workspace/output/Vision/AxisCamera.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/AxisCameraParams.o : C:/WindRiver/workspace/output/Vision/AxisCameraParams.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/BinaryImage.o : C:/WindRiver/workspace/output/Vision/BinaryImage.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/ColorImage.o : C:/WindRiver/workspace/output/Vision/ColorImage.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/EnumCameraParameter.o : C:/WindRiver/workspace/output/Vision/EnumCameraParameter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/HSLImage.o : C:/WindRiver/workspace/output/Vision/HSLImage.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/ImageBase.o : C:/WindRiver/workspace/output/Vision/ImageBase.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/IntCameraParameter.o : C:/WindRiver/workspace/output/Vision/IntCameraParameter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/MonoImage.o : C:/WindRiver/workspace/output/Vision/MonoImage.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/PCVideoServer.o : C:/WindRiver/workspace/output/Vision/PCVideoServer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/RGBImage.o : C:/WindRiver/workspace/output/Vision/RGBImage.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision/Threshold.o : C:/WindRiver/workspace/output/Vision/Threshold.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision2009/AxisCamera.o : C:/WindRiver/workspace/output/Vision2009/AxisCamera.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision2009/BaeUtilities.o : C:/WindRiver/workspace/output/Vision2009/BaeUtilities.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision2009/FrcError.o : C:/WindRiver/workspace/output/Vision2009/FrcError.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision2009/TrackAPI.o : C:/WindRiver/workspace/output/Vision2009/TrackAPI.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Vision2009/VisionAPI.o : C:/WindRiver/workspace/output/Vision2009/VisionAPI.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/Watchdog.o : C:/WindRiver/workspace/output/Watchdog.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/main.o : C:/WindRiver/workspace/output/main.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables/NetworkTable.o : C:/WindRiver/workspace/output/networktables/NetworkTable.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables/NetworkTableConnectionListenerAdapter.o : C:/WindRiver/workspace/output/networktables/NetworkTableConnectionListenerAdapter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables/NetworkTableKeyListenerAdapter.o : C:/WindRiver/workspace/output/networktables/NetworkTableKeyListenerAdapter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables/NetworkTableListenerAdapter.o : C:/WindRiver/workspace/output/networktables/NetworkTableListenerAdapter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables/NetworkTableMode.o : C:/WindRiver/workspace/output/networktables/NetworkTableMode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables/NetworkTableProvider.o : C:/WindRiver/workspace/output/networktables/NetworkTableProvider.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables/NetworkTableSubListenerAdapter.o : C:/WindRiver/workspace/output/networktables/NetworkTableSubListenerAdapter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/AbstractNetworkTableEntryStore.o : C:/WindRiver/workspace/output/networktables2/AbstractNetworkTableEntryStore.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/NetworkTableEntry.o : C:/WindRiver/workspace/output/networktables2/NetworkTableEntry.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/NetworkTableNode.o : C:/WindRiver/workspace/output/networktables2/NetworkTableNode.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/OutgoingEntryReciever.o : C:/WindRiver/workspace/output/networktables2/OutgoingEntryReciever.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/TableKeyExistsWithDifferentTypeException.o : C:/WindRiver/workspace/output/networktables2/TableKeyExistsWithDifferentTypeException.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/TransactionDirtier.o : C:/WindRiver/workspace/output/networktables2/TransactionDirtier.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/WriteManager.o : C:/WindRiver/workspace/output/networktables2/WriteManager.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/client/ClientConnectionAdapter.o : C:/WindRiver/workspace/output/networktables2/client/ClientConnectionAdapter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/client/ClientConnectionState.o : C:/WindRiver/workspace/output/networktables2/client/ClientConnectionState.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/client/ClientNetworkTableEntryStore.o : C:/WindRiver/workspace/output/networktables2/client/ClientNetworkTableEntryStore.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/client/NetworkTableClient.o : C:/WindRiver/workspace/output/networktables2/client/NetworkTableClient.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/connection/BadMessageException.o : C:/WindRiver/workspace/output/networktables2/connection/BadMessageException.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/connection/ConnectionMonitorThread.o : C:/WindRiver/workspace/output/networktables2/connection/ConnectionMonitorThread.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/connection/DataIOStream.o : C:/WindRiver/workspace/output/networktables2/connection/DataIOStream.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/connection/NetworkTableConnection.o : C:/WindRiver/workspace/output/networktables2/connection/NetworkTableConnection.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/server/NetworkTableServer.o : C:/WindRiver/workspace/output/networktables2/server/NetworkTableServer.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionAdapter.o : C:/WindRiver/workspace/output/networktables2/server/ServerConnectionAdapter.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionList.o : C:/WindRiver/workspace/output/networktables2/server/ServerConnectionList.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionState.o : C:/WindRiver/workspace/output/networktables2/server/ServerConnectionState.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/server/ServerIncomingStreamMonitor.o : C:/WindRiver/workspace/output/networktables2/server/ServerIncomingStreamMonitor.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/server/ServerNetworkTableEntryStore.o : C:/WindRiver/workspace/output/networktables2/server/ServerNetworkTableEntryStore.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/stream/FDIOStream.o : C:/WindRiver/workspace/output/networktables2/stream/FDIOStream.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketServerStreamProvider.o : C:/WindRiver/workspace/output/networktables2/stream/SocketServerStreamProvider.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketStreamFactory.o : C:/WindRiver/workspace/output/networktables2/stream/SocketStreamFactory.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketStreams.o : C:/WindRiver/workspace/output/networktables2/stream/SocketStreams.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/thread/DefaultThreadManger.o : C:/WindRiver/workspace/output/networktables2/thread/DefaultThreadManger.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/ArrayData.o : C:/WindRiver/workspace/output/networktables2/type/ArrayData.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/ArrayEntryType.o : C:/WindRiver/workspace/output/networktables2/type/ArrayEntryType.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/BooleanArray.o : C:/WindRiver/workspace/output/networktables2/type/BooleanArray.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/ComplexData.o : C:/WindRiver/workspace/output/networktables2/type/ComplexData.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/ComplexEntryType.o : C:/WindRiver/workspace/output/networktables2/type/ComplexEntryType.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/DefaultEntryTypes.o : C:/WindRiver/workspace/output/networktables2/type/DefaultEntryTypes.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/NetworkTableEntryType.o : C:/WindRiver/workspace/output/networktables2/type/NetworkTableEntryType.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/NetworkTableEntryTypeManager.o : C:/WindRiver/workspace/output/networktables2/type/NetworkTableEntryTypeManager.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/NumberArray.o : C:/WindRiver/workspace/output/networktables2/type/NumberArray.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/type/StringArray.o : C:/WindRiver/workspace/output/networktables2/type/StringArray.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/util/EOFException.o : C:/WindRiver/workspace/output/networktables2/util/EOFException.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/util/IOException.o : C:/WindRiver/workspace/output/networktables2/util/IOException.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/util/IllegalStateException.o : C:/WindRiver/workspace/output/networktables2/util/IllegalStateException.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/util/StringCache.o : C:/WindRiver/workspace/output/networktables2/util/StringCache.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/networktables2/util/System.o : C:/WindRiver/workspace/output/networktables2/util/System.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


output/$(MODE_DIR)/Objects/output/tables/TableKeyNotDefinedException.o : C:/WindRiver/workspace/output/tables/TableKeyNotDefinedException.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"


OBJECTS_output = output/$(MODE_DIR)/Objects/output/ADXL345_I2C.o \
	 output/$(MODE_DIR)/Objects/output/ADXL345_SPI.o \
	 output/$(MODE_DIR)/Objects/output/Accelerometer.o \
	 output/$(MODE_DIR)/Objects/output/AnalogChannel.o \
	 output/$(MODE_DIR)/Objects/output/AnalogModule.o \
	 output/$(MODE_DIR)/Objects/output/AnalogTrigger.o \
	 output/$(MODE_DIR)/Objects/output/AnalogTriggerOutput.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/AnalogIOButton.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/Button.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/ButtonScheduler.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/DigitalIOButton.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/HeldButtonScheduler.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/InternalButton.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/JoystickButton.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/NetworkButton.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/PressedButtonScheduler.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/ReleasedButtonScheduler.o \
	 output/$(MODE_DIR)/Objects/output/Buttons/Trigger.o \
	 output/$(MODE_DIR)/Objects/output/CANJaguar.o \
	 output/$(MODE_DIR)/Objects/output/Commands/Command.o \
	 output/$(MODE_DIR)/Objects/output/Commands/CommandGroup.o \
	 output/$(MODE_DIR)/Objects/output/Commands/CommandGroupEntry.o \
	 output/$(MODE_DIR)/Objects/output/Commands/PIDCommand.o \
	 output/$(MODE_DIR)/Objects/output/Commands/PIDSubsystem.o \
	 output/$(MODE_DIR)/Objects/output/Commands/PrintCommand.o \
	 output/$(MODE_DIR)/Objects/output/Commands/Scheduler.o \
	 output/$(MODE_DIR)/Objects/output/Commands/StartCommand.o \
	 output/$(MODE_DIR)/Objects/output/Commands/Subsystem.o \
	 output/$(MODE_DIR)/Objects/output/Commands/WaitCommand.o \
	 output/$(MODE_DIR)/Objects/output/Commands/WaitForChildren.o \
	 output/$(MODE_DIR)/Objects/output/Commands/WaitUntilCommand.o \
	 output/$(MODE_DIR)/Objects/output/Compressor.o \
	 output/$(MODE_DIR)/Objects/output/Counter.o \
	 output/$(MODE_DIR)/Objects/output/Dashboard.o \
	 output/$(MODE_DIR)/Objects/output/DigitalInput.o \
	 output/$(MODE_DIR)/Objects/output/DigitalModule.o \
	 output/$(MODE_DIR)/Objects/output/DigitalOutput.o \
	 output/$(MODE_DIR)/Objects/output/DigitalSource.o \
	 output/$(MODE_DIR)/Objects/output/DoubleSolenoid.o \
	 output/$(MODE_DIR)/Objects/output/DriverStation.o \
	 output/$(MODE_DIR)/Objects/output/DriverStationEnhancedIO.o \
	 output/$(MODE_DIR)/Objects/output/DriverStationLCD.o \
	 output/$(MODE_DIR)/Objects/output/Encoder.o \
	 output/$(MODE_DIR)/Objects/output/Error.o \
	 output/$(MODE_DIR)/Objects/output/ErrorBase.o \
	 output/$(MODE_DIR)/Objects/output/GearTooth.o \
	 output/$(MODE_DIR)/Objects/output/Gyro.o \
	 output/$(MODE_DIR)/Objects/output/HiTechnicColorSensor.o \
	 output/$(MODE_DIR)/Objects/output/HiTechnicCompass.o \
	 output/$(MODE_DIR)/Objects/output/I2C.o \
	 output/$(MODE_DIR)/Objects/output/InterruptableSensorBase.o \
	 output/$(MODE_DIR)/Objects/output/IterativeRobot.o \
	 output/$(MODE_DIR)/Objects/output/Jaguar.o \
	 output/$(MODE_DIR)/Objects/output/Joystick.o \
	 output/$(MODE_DIR)/Objects/output/Kinect.o \
	 output/$(MODE_DIR)/Objects/output/KinectStick.o \
	 output/$(MODE_DIR)/Objects/output/LiveWindow/LiveWindow.o \
	 output/$(MODE_DIR)/Objects/output/LiveWindow/LiveWindowStatusListener.o \
	 output/$(MODE_DIR)/Objects/output/Module.o \
	 output/$(MODE_DIR)/Objects/output/MotorSafetyHelper.o \
	 output/$(MODE_DIR)/Objects/output/Notifier.o \
	 output/$(MODE_DIR)/Objects/output/PIDController.o \
	 output/$(MODE_DIR)/Objects/output/PWM.o \
	 output/$(MODE_DIR)/Objects/output/Preferences.o \
	 output/$(MODE_DIR)/Objects/output/Relay.o \
	 output/$(MODE_DIR)/Objects/output/Resource.o \
	 output/$(MODE_DIR)/Objects/output/RobotBase.o \
	 output/$(MODE_DIR)/Objects/output/RobotDrive.o \
	 output/$(MODE_DIR)/Objects/output/SPI.o \
	 output/$(MODE_DIR)/Objects/output/SafePWM.o \
	 output/$(MODE_DIR)/Objects/output/SensorBase.o \
	 output/$(MODE_DIR)/Objects/output/SerialPort.o \
	 output/$(MODE_DIR)/Objects/output/Servo.o \
	 output/$(MODE_DIR)/Objects/output/SimpleRobot.o \
	 output/$(MODE_DIR)/Objects/output/SmartDashboard/SendableChooser.o \
	 output/$(MODE_DIR)/Objects/output/SmartDashboard/SmartDashboard.o \
	 output/$(MODE_DIR)/Objects/output/Solenoid.o \
	 output/$(MODE_DIR)/Objects/output/SolenoidBase.o \
	 output/$(MODE_DIR)/Objects/output/Synchronized.o \
	 output/$(MODE_DIR)/Objects/output/Talon.o \
	 output/$(MODE_DIR)/Objects/output/Task.o \
	 output/$(MODE_DIR)/Objects/output/Timer.o \
	 output/$(MODE_DIR)/Objects/output/Ultrasonic.o \
	 output/$(MODE_DIR)/Objects/output/Utility.o \
	 output/$(MODE_DIR)/Objects/output/Victor.o \
	 output/$(MODE_DIR)/Objects/output/Vision/AxisCamera.o \
	 output/$(MODE_DIR)/Objects/output/Vision/AxisCameraParams.o \
	 output/$(MODE_DIR)/Objects/output/Vision/BinaryImage.o \
	 output/$(MODE_DIR)/Objects/output/Vision/ColorImage.o \
	 output/$(MODE_DIR)/Objects/output/Vision/EnumCameraParameter.o \
	 output/$(MODE_DIR)/Objects/output/Vision/HSLImage.o \
	 output/$(MODE_DIR)/Objects/output/Vision/ImageBase.o \
	 output/$(MODE_DIR)/Objects/output/Vision/IntCameraParameter.o \
	 output/$(MODE_DIR)/Objects/output/Vision/MonoImage.o \
	 output/$(MODE_DIR)/Objects/output/Vision/PCVideoServer.o \
	 output/$(MODE_DIR)/Objects/output/Vision/RGBImage.o \
	 output/$(MODE_DIR)/Objects/output/Vision/Threshold.o \
	 output/$(MODE_DIR)/Objects/output/Vision2009/AxisCamera.o \
	 output/$(MODE_DIR)/Objects/output/Vision2009/BaeUtilities.o \
	 output/$(MODE_DIR)/Objects/output/Vision2009/FrcError.o \
	 output/$(MODE_DIR)/Objects/output/Vision2009/TrackAPI.o \
	 output/$(MODE_DIR)/Objects/output/Vision2009/VisionAPI.o \
	 output/$(MODE_DIR)/Objects/output/Watchdog.o \
	 output/$(MODE_DIR)/Objects/output/main.o \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTable.o \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTableConnectionListenerAdapter.o \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTableKeyListenerAdapter.o \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTableListenerAdapter.o \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTableMode.o \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTableProvider.o \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTableSubListenerAdapter.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/AbstractNetworkTableEntryStore.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/NetworkTableEntry.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/NetworkTableNode.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/OutgoingEntryReciever.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/TableKeyExistsWithDifferentTypeException.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/TransactionDirtier.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/WriteManager.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/client/ClientConnectionAdapter.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/client/ClientConnectionState.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/client/ClientNetworkTableEntryStore.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/client/NetworkTableClient.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/connection/BadMessageException.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/connection/ConnectionMonitorThread.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/connection/DataIOStream.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/connection/NetworkTableConnection.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/server/NetworkTableServer.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionAdapter.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionList.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionState.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/server/ServerIncomingStreamMonitor.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/server/ServerNetworkTableEntryStore.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/stream/FDIOStream.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketServerStreamProvider.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketStreamFactory.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketStreams.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/thread/DefaultThreadManger.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/ArrayData.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/ArrayEntryType.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/BooleanArray.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/ComplexData.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/ComplexEntryType.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/DefaultEntryTypes.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/NetworkTableEntryType.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/NetworkTableEntryTypeManager.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/NumberArray.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/StringArray.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/util/EOFException.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/util/IOException.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/util/IllegalStateException.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/util/StringCache.o \
	 output/$(MODE_DIR)/Objects/output/networktables2/util/System.o \
	 output/$(MODE_DIR)/Objects/output/tables/TableKeyNotDefinedException.o

output/$(MODE_DIR)/output.vxe : $(OBJECTS_output)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dplus $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd  -o "$@" $(OBJECTS_output) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/ppc/PPC32/common $(ADDED_LIBPATH) $(ADDED_LIBS)   && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && stripppc -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

output/$(MODE_DIR)/output_compile_file : $(FILE) ;

_clean :: output/$(MODE_DIR)/output_clean

output/$(MODE_DIR)/output_clean : 
	$(TRACE_FLAG)if [ -d "output" ]; then cd "output"; rm -rf $(MODE_DIR); fi

DEP_FILES := output/$(MODE_DIR)/Objects/output/ADXL345_I2C.d output/$(MODE_DIR)/Objects/output/ADXL345_SPI.d output/$(MODE_DIR)/Objects/output/Accelerometer.d \
	 output/$(MODE_DIR)/Objects/output/AnalogChannel.d output/$(MODE_DIR)/Objects/output/AnalogModule.d output/$(MODE_DIR)/Objects/output/AnalogTrigger.d \
	 output/$(MODE_DIR)/Objects/output/AnalogTriggerOutput.d output/$(MODE_DIR)/Objects/output/Buttons/AnalogIOButton.d output/$(MODE_DIR)/Objects/output/Buttons/Button.d \
	 output/$(MODE_DIR)/Objects/output/Buttons/ButtonScheduler.d output/$(MODE_DIR)/Objects/output/Buttons/DigitalIOButton.d output/$(MODE_DIR)/Objects/output/Buttons/HeldButtonScheduler.d \
	 output/$(MODE_DIR)/Objects/output/Buttons/InternalButton.d output/$(MODE_DIR)/Objects/output/Buttons/JoystickButton.d output/$(MODE_DIR)/Objects/output/Buttons/NetworkButton.d \
	 output/$(MODE_DIR)/Objects/output/Buttons/PressedButtonScheduler.d output/$(MODE_DIR)/Objects/output/Buttons/ReleasedButtonScheduler.d output/$(MODE_DIR)/Objects/output/Buttons/Trigger.d \
	 output/$(MODE_DIR)/Objects/output/CANJaguar.d output/$(MODE_DIR)/Objects/output/Commands/Command.d output/$(MODE_DIR)/Objects/output/Commands/CommandGroup.d \
	 output/$(MODE_DIR)/Objects/output/Commands/CommandGroupEntry.d output/$(MODE_DIR)/Objects/output/Commands/PIDCommand.d output/$(MODE_DIR)/Objects/output/Commands/PIDSubsystem.d \
	 output/$(MODE_DIR)/Objects/output/Commands/PrintCommand.d output/$(MODE_DIR)/Objects/output/Commands/Scheduler.d output/$(MODE_DIR)/Objects/output/Commands/StartCommand.d \
	 output/$(MODE_DIR)/Objects/output/Commands/Subsystem.d output/$(MODE_DIR)/Objects/output/Commands/WaitCommand.d output/$(MODE_DIR)/Objects/output/Commands/WaitForChildren.d \
	 output/$(MODE_DIR)/Objects/output/Commands/WaitUntilCommand.d output/$(MODE_DIR)/Objects/output/Compressor.d output/$(MODE_DIR)/Objects/output/Counter.d \
	 output/$(MODE_DIR)/Objects/output/Dashboard.d output/$(MODE_DIR)/Objects/output/DigitalInput.d output/$(MODE_DIR)/Objects/output/DigitalModule.d \
	 output/$(MODE_DIR)/Objects/output/DigitalOutput.d output/$(MODE_DIR)/Objects/output/DigitalSource.d output/$(MODE_DIR)/Objects/output/DoubleSolenoid.d \
	 output/$(MODE_DIR)/Objects/output/DriverStation.d output/$(MODE_DIR)/Objects/output/DriverStationEnhancedIO.d output/$(MODE_DIR)/Objects/output/DriverStationLCD.d \
	 output/$(MODE_DIR)/Objects/output/Encoder.d output/$(MODE_DIR)/Objects/output/Error.d output/$(MODE_DIR)/Objects/output/ErrorBase.d \
	 output/$(MODE_DIR)/Objects/output/GearTooth.d output/$(MODE_DIR)/Objects/output/Gyro.d output/$(MODE_DIR)/Objects/output/HiTechnicColorSensor.d \
	 output/$(MODE_DIR)/Objects/output/HiTechnicCompass.d output/$(MODE_DIR)/Objects/output/I2C.d output/$(MODE_DIR)/Objects/output/InterruptableSensorBase.d \
	 output/$(MODE_DIR)/Objects/output/IterativeRobot.d output/$(MODE_DIR)/Objects/output/Jaguar.d output/$(MODE_DIR)/Objects/output/Joystick.d \
	 output/$(MODE_DIR)/Objects/output/Kinect.d output/$(MODE_DIR)/Objects/output/KinectStick.d output/$(MODE_DIR)/Objects/output/LiveWindow/LiveWindow.d \
	 output/$(MODE_DIR)/Objects/output/LiveWindow/LiveWindowStatusListener.d output/$(MODE_DIR)/Objects/output/Module.d output/$(MODE_DIR)/Objects/output/MotorSafetyHelper.d \
	 output/$(MODE_DIR)/Objects/output/Notifier.d output/$(MODE_DIR)/Objects/output/PIDController.d output/$(MODE_DIR)/Objects/output/PWM.d \
	 output/$(MODE_DIR)/Objects/output/Preferences.d output/$(MODE_DIR)/Objects/output/Relay.d output/$(MODE_DIR)/Objects/output/Resource.d \
	 output/$(MODE_DIR)/Objects/output/RobotBase.d output/$(MODE_DIR)/Objects/output/RobotDrive.d output/$(MODE_DIR)/Objects/output/SPI.d \
	 output/$(MODE_DIR)/Objects/output/SafePWM.d output/$(MODE_DIR)/Objects/output/SensorBase.d output/$(MODE_DIR)/Objects/output/SerialPort.d \
	 output/$(MODE_DIR)/Objects/output/Servo.d output/$(MODE_DIR)/Objects/output/SimpleRobot.d output/$(MODE_DIR)/Objects/output/SmartDashboard/SendableChooser.d \
	 output/$(MODE_DIR)/Objects/output/SmartDashboard/SmartDashboard.d output/$(MODE_DIR)/Objects/output/Solenoid.d output/$(MODE_DIR)/Objects/output/SolenoidBase.d \
	 output/$(MODE_DIR)/Objects/output/Synchronized.d output/$(MODE_DIR)/Objects/output/Talon.d output/$(MODE_DIR)/Objects/output/Task.d \
	 output/$(MODE_DIR)/Objects/output/Timer.d output/$(MODE_DIR)/Objects/output/Ultrasonic.d output/$(MODE_DIR)/Objects/output/Utility.d \
	 output/$(MODE_DIR)/Objects/output/Victor.d output/$(MODE_DIR)/Objects/output/Vision/AxisCamera.d output/$(MODE_DIR)/Objects/output/Vision/AxisCameraParams.d \
	 output/$(MODE_DIR)/Objects/output/Vision/BinaryImage.d output/$(MODE_DIR)/Objects/output/Vision/ColorImage.d output/$(MODE_DIR)/Objects/output/Vision/EnumCameraParameter.d \
	 output/$(MODE_DIR)/Objects/output/Vision/HSLImage.d output/$(MODE_DIR)/Objects/output/Vision/ImageBase.d output/$(MODE_DIR)/Objects/output/Vision/IntCameraParameter.d \
	 output/$(MODE_DIR)/Objects/output/Vision/MonoImage.d output/$(MODE_DIR)/Objects/output/Vision/PCVideoServer.d output/$(MODE_DIR)/Objects/output/Vision/RGBImage.d \
	 output/$(MODE_DIR)/Objects/output/Vision/Threshold.d output/$(MODE_DIR)/Objects/output/Vision2009/AxisCamera.d output/$(MODE_DIR)/Objects/output/Vision2009/BaeUtilities.d \
	 output/$(MODE_DIR)/Objects/output/Vision2009/FrcError.d output/$(MODE_DIR)/Objects/output/Vision2009/TrackAPI.d output/$(MODE_DIR)/Objects/output/Vision2009/VisionAPI.d \
	 output/$(MODE_DIR)/Objects/output/Watchdog.d output/$(MODE_DIR)/Objects/output/main.d output/$(MODE_DIR)/Objects/output/networktables/NetworkTable.d \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTableConnectionListenerAdapter.d output/$(MODE_DIR)/Objects/output/networktables/NetworkTableKeyListenerAdapter.d output/$(MODE_DIR)/Objects/output/networktables/NetworkTableListenerAdapter.d \
	 output/$(MODE_DIR)/Objects/output/networktables/NetworkTableMode.d output/$(MODE_DIR)/Objects/output/networktables/NetworkTableProvider.d output/$(MODE_DIR)/Objects/output/networktables/NetworkTableSubListenerAdapter.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/AbstractNetworkTableEntryStore.d output/$(MODE_DIR)/Objects/output/networktables2/NetworkTableEntry.d output/$(MODE_DIR)/Objects/output/networktables2/NetworkTableNode.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/OutgoingEntryReciever.d output/$(MODE_DIR)/Objects/output/networktables2/TableKeyExistsWithDifferentTypeException.d output/$(MODE_DIR)/Objects/output/networktables2/TransactionDirtier.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/WriteManager.d output/$(MODE_DIR)/Objects/output/networktables2/client/ClientConnectionAdapter.d output/$(MODE_DIR)/Objects/output/networktables2/client/ClientConnectionState.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/client/ClientNetworkTableEntryStore.d output/$(MODE_DIR)/Objects/output/networktables2/client/NetworkTableClient.d output/$(MODE_DIR)/Objects/output/networktables2/connection/BadMessageException.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/connection/ConnectionMonitorThread.d output/$(MODE_DIR)/Objects/output/networktables2/connection/DataIOStream.d output/$(MODE_DIR)/Objects/output/networktables2/connection/NetworkTableConnection.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/server/NetworkTableServer.d output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionAdapter.d output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionList.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/server/ServerConnectionState.d output/$(MODE_DIR)/Objects/output/networktables2/server/ServerIncomingStreamMonitor.d output/$(MODE_DIR)/Objects/output/networktables2/server/ServerNetworkTableEntryStore.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/stream/FDIOStream.d output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketServerStreamProvider.d output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketStreamFactory.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/stream/SocketStreams.d output/$(MODE_DIR)/Objects/output/networktables2/thread/DefaultThreadManger.d output/$(MODE_DIR)/Objects/output/networktables2/type/ArrayData.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/ArrayEntryType.d output/$(MODE_DIR)/Objects/output/networktables2/type/BooleanArray.d output/$(MODE_DIR)/Objects/output/networktables2/type/ComplexData.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/ComplexEntryType.d output/$(MODE_DIR)/Objects/output/networktables2/type/DefaultEntryTypes.d output/$(MODE_DIR)/Objects/output/networktables2/type/NetworkTableEntryType.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/type/NetworkTableEntryTypeManager.d output/$(MODE_DIR)/Objects/output/networktables2/type/NumberArray.d output/$(MODE_DIR)/Objects/output/networktables2/type/StringArray.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/util/EOFException.d output/$(MODE_DIR)/Objects/output/networktables2/util/IOException.d output/$(MODE_DIR)/Objects/output/networktables2/util/IllegalStateException.d \
	 output/$(MODE_DIR)/Objects/output/networktables2/util/StringCache.d output/$(MODE_DIR)/Objects/output/networktables2/util/System.d output/$(MODE_DIR)/Objects/output/tables/TableKeyNotDefinedException.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
