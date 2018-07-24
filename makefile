#!/bin/bash
SRCS := $(wildcard *.cpp)
OBJS := ./base64

all: $(OBJS)

$(OBJS): $(SRCS)
	clang++ -Wall -std=c++14 $(SRCS) -o $(OBJS)
