#include <stdio.h>

enum ObjectState { STOPPED, MOVING, JUMPING };

int main() {
  enum ObjectState playerState = STOPPED;

  switch (playerState) {
  case STOPPED:
    printf("The player is stopped.\n");
    break;
  case MOVING:
    printf("The player is moving.\n");
    break;
  case JUMPING:
    printf("The player is jumping.\n");
    break;
  default:
    printf("Invalid state.\n");
    break;
  }

  return 0;
}