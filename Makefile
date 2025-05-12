# Makefile generated with Perplexity AI

SUBDIRS := $(wildcard ex*)

# Forward all targets and arguments to ex1/Makefile
.PHONY: all clean

ex01:
	$(MAKE) -C ex01-second-order-equation-solver/ all

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
