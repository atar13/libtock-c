# Base folder definitions
TOCK_USERLAND_BASE_DIR ?= ..
LIBNAME := libtest
$(LIBNAME)_DIR := $(TOCK_USERLAND_BASE_DIR)/$(LIBNAME)

# List all C and Assembly files
$(LIBNAME)_SRCS  := $(wildcard $($(LIBNAME)_DIR)/*.c)

override TOCK_TARGETS ?= cortex-m4

include $(TOCK_USERLAND_BASE_DIR)/TockSharedLibrary.mk
