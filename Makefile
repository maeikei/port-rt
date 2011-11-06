ALL_TARGET += i686-pc-linux-gnu


SRC_DIR_RT = $(shell pwd)
OBJ_DIR_RT = $(shell pwd)/../../clang-port-obj

INSTALL_DIR = $(shell pwd)/../install
all:
	chmod +x ./*.sh
	@$(foreach target,$(ALL_TARGET),\
		@./build.sh $(target) $(SRC_DIR_RT) $(OBJ_DIR_RT) $(INSTALL_DIR) ; \
	)
