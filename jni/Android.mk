LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := hellojni
LOCAL_C_INCLUDES := $(LOCAL_PATH)
LOCAL_SRC_FILES := Hello.cc

LOCAL_LDLIBS   := -lz -lm
LOCAL_CFLAGS   := -pedantic -Wall -Wextra -Werror -std=c++11 -g

include $(BUILD_SHARED_LIBRARY)
