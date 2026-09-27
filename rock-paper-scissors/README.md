# Stone-Paper-Scissor Game (C++)

This is a simple console game I made in C++. You play Stone-Paper-Scissor against the computer.

It was my first project that I finished without looking at a mentor's solution. I will keep improving it.

## What it does

- Asks you how many rounds you want to play.
- Each round, you choose paper, stone, or scissor. The computer chooses randomly.
- Shows who won the round.
- Screen turns green if you win, red if the computer wins, yellow if it's a draw.
- Makes a beep sound when the computer wins.
- At the end, shows the final score and asks if you want to play again.

## How to play

1. Run the program.
2. Type how many rounds you want.
3. Each round, type your choice:
   - `1` = paper
   - `2` = stone
   - `3` = scissor
4. See the result of the round.
5. After all rounds, see the final result.
6. Type `0` to stop, or any other number to play again.

## How to run

### On Windows (with colors)

```
g++ -o game.exe main.cpp
game.exe
```

You need a C++ compiler like g++ (from MinGW) or you can use Code::Blocks / Dev-C++.

### Online (no install)

You can also run it online, for example on [OnlineGDB](https://www.onlinegdb.com/online_c++_compiler). Paste the code, click Run, and type your answers in the input box.

Note: online compilers don't run on Windows, so the colors won't work there. The game will still work normally.

## How the winner logic works

I used numbers instead of a big if-else list:

```
paper = 1, stone = 2, scissor = 3
```

If the difference between the two numbers is 1, the smaller number wins.
If the difference is 2, the bigger number wins.
If the numbers are the same, it's a draw.

This works because paper, stone, and scissor go in a circle (paper beats stone, stone beats scissor, scissor beats paper), so the one special case (paper vs scissor) needs the opposite rule.

## Things I want to improve later

- Check that the player only types 1, 2, or 3.
- Fix the bug where typing 0 rounds still plays one round.
- Make the colors work on Linux/Mac too, not just Windows.
- Add a screenshot of a losing round (red screen).

