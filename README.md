# CUB3D

## Build

Run `make` from the repository root. The build links the bundled Linux MiniLibX archive with X11, Xext, and the math library.

## Run

From the repository root, run `./cub3d test.cub` in a graphical Linux session. Pass one `.cub` map file as the argument.

## Controls

Use W, A, S, and D to move, the left and right arrow keys to turn, and Escape to exit.

## Cleanup

Run `make clean` to remove object files, `make fclean` to also remove `cub3d`, or `make re` for a complete rebuild.
