CXX 		= g++
CXX_FLAGS 	= 
LIBRARIES 	= 

BUILD_DIR = build
BIN_DIR = $(BUILD_DIR)/bin
OBJ_DIR = $(BUILD_DIR)/obj

EXEC = $(BIN_DIR)/web_server.exe

# Make does not offer a recursive wildcard function, so here's one:
rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

SOURCES := $(call rwildcard,src/,*.cpp)
HEADERS := $(call rwildcard,src/,*.hpp)

clean:
	rm -rf $(BUILD_DIR)

all_dirs: $(BIN_DIR) $(OBJ_DIR)

$(BUILD_DIR):
	mkdir $@

$(BIN_DIR): $(BUILD_DIR)
	mkdir $@

$(OBJ_DIR): $(BUILD_DIR)
	mkdir $@

all: all_dirs
	$(CXX) $(SOURCES) $(CXX_FLAGS) $(LIBRARIES) -o $(EXEC)
