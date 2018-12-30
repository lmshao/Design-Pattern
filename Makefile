.PHONY:all clean

exclude_dirs := .git
dirs := $(shell find . -type d -maxdepth 1)
dirs := $(basename $(patsubst ./%, %, $(dirs)))
dirs := $(filter-out $(exclude_dirs), $(dirs))

all:
	$(foreach N,$(dirs),make -C $(N);)
clean:
	$(foreach N,$(dirs),make -C $(N) clean;)
