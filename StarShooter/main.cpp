#include "Game.h"
#include <time.h>

int main() {
	// initialize seed
	srand(time(static_cast<unsigned>(0)));

	Game game;

	game.run();

	return 0;
}
