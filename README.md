
# Snake-Water-Gun Game in C

This repository contains a command-line implementation of the popular game "Snake-Water-Gun" in C. Similar to Rock-Paper-Scissors, players compete by choosing one of three options (Snake, Water, or Gun), with each option having specific win/loss interactions.

## Features

- **Single-player mode**: Play against the computer.
- **Randomized outcomes**: The computer randomly selects its option each round.
- **Simple gameplay**: Provides instant feedback on win, loss, or draw.

## Getting Started

### Prerequisites

- A C compiler, such as GCC

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/snake-water-gun.git
   cd snake-water-gun
   ```

2. Compile the code:
   ```bash
   gcc snake-watergun.c -o snake-watergun
   ```

3. Run the game:
   ```bash
   ./snake-watergun
   ```

## How to Play

- Players choose one option: Snake, Water, or Gun.
- The computer randomly selects its option as well.
- The outcome is decided based on the following rules:
  - Snake drinks Water -> Snake wins
  - Water douses Gun -> Water wins
  - Gun kills Snake -> Gun wins
- If both the player and the computer choose the same option, it’s a draw.

## Example Gameplay

```plaintext
Choose your option (1 for Snake, 2 for Water, 3 for Gun): 1
You chose Snake
Computer chose Gun
Computer wins! Gun kills Snake.
```

## Code Structure

- **snake-watergun.c**: Contains the full code logic for the game, including:
  - Taking user input
  - Randomly selecting the computer’s choice
  - Comparing choices and determining the outcome


