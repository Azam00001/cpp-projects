<h1 align="center">🪨 📄 ✂️ Stone • Paper • Scissor</h1>
<h3 align="center">A fun, colorful console game built in C++!</h3>

<p align="center">
  Pick your move, race against the computer, and watch the screen change color when you win! 🟩🟥🟨
</p>

<p align="center">
  <img alt="Language" src="https://img.shields.io/badge/Made%20with-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white">
  <img alt="Platform" src="https://img.shields.io/badge/Platform-Windows%20Console-0078D6?style=for-the-badge&logo=windows&logoColor=white">
  <img alt="Fun Level" src="https://img.shields.io/badge/Fun%20Level-⭐⭐⭐⭐⭐-yellow?style=for-the-badge">
  <img alt="License" src="https://img.shields.io/badge/License-MIT-brightgreen?style=for-the-badge">
</p>

<p align="center">
  <img src="docs/screenshots/round-win.jpg" alt="Winning a round in the game" width="700">
</p>

---

## 🎮 What Is This Game?

Ever played Stone, Paper, Scissor with a friend? Now you can play it with your **computer** — right in a black terminal window that turns colors depending on who wins! 🎉

- 🟩 **Green screen** → You win the round!
- 🟥 **Red screen** → The computer wins (and it even makes a little *beep*! 🔔)
- 🟨 **Yellow screen** → It's a draw — nobody wins!

You choose how many rounds to play, battle it out round by round, and see the final score at the end. Then you can play again as many times as you like!

---

## 🕹️ How To Play

1. The game asks: *"How many rounds do you want to play?"* — type a number, like `3`.
2. Each round, pick your move:
   - `1` = 📄 Paper
   - `2` = 🪨 Stone
   - `3` = ✂️ Scissor
3. The computer picks its move secretly and randomly.
4. The winner of the round is shown — and the screen changes color!
5. After all the rounds, you'll see the **final scoreboard** 🏆
6. Want to play again? Just say yes!

**The rules are the classic ones:**

| | Beats | Loses to |
|---|---|---|
| 🪨 Stone | ✂️ Scissor | 📄 Paper |
| 📄 Paper | 🪨 Stone | ✂️ Scissor |
| ✂️ Scissor | 📄 Paper | 🪨 Stone |

---

## 📸 See It In Action

<p align="center">
  <img src="docs/screenshots/round-win.jpg" alt="Winning a round" width="260">
  <img src="docs/screenshots/final-result.jpg" alt="Final scoreboard" width="260">
  <img src="docs/screenshots/session-end.jpg" alt="A full game session" width="260">
</p>

<p align="center"><i>The screen turns green when you win a round — and the final scoreboard shows who came out on top! 🏆</i></p>

**Want to add more pictures of your own?**
1. Play the game and take a screenshot (press `Win + Shift + S` on Windows). 📷
2. Put your pictures inside the `docs/screenshots/` folder in this project.
3. Give them clear names, like `round-lose.jpg` for a red losing screen. 🟥
4. Save, commit, and push to GitHub — your pictures will show up automatically! ✨

You can even make a short GIF of yourself playing with a free tool like [ScreenToGif](https://www.screentogif.com/) — animated previews are extra fun to look at!

---

## 🚀 How To Run The Game

### 🖥️ Option 1 — Play it on your own computer (best experience, with colors!)

You'll need a C++ compiler like **g++** (comes with [MinGW](https://www.mingw-w64.org/) or [Code::Blocks](http://www.codeblocks.org/downloads)).

```bash
# 1. Download the project
git clone https://github.com/<your-username>/<your-repo>.git
cd <your-repo>

# 2. Compile it
g++ -o game.exe main.cpp

# 3. Play!
./game.exe
```

Or just open `main.cpp` in **Code::Blocks**, **Dev-C++**, or **Visual Studio** and press the green ▶️ Run button.

### 🌍 Option 2 — Play it online (no downloads needed!)

You can also try the game straight from your web browser — perfect for a quick test:

- 🔗 **[OnlineGDB](https://www.onlinegdb.com/online_c++_compiler)** — paste in the code, hit **Run**, and type your answers in the input box. Works great for this game! ✅
- 🔗 **[Replit](https://replit.com/languages/cpp)** — make a new C++ project, paste the code in, and press **Run**. ✅

> 💡 **Good to know:** online compilers run on computers that aren't Windows, so the color-changing trick won't work there — but the game itself will play perfectly! For the full colorful experience, run it on a Windows computer. 🌈

---

## 🧩 The Clever Trick Behind The Scenes

Instead of writing a giant list of "if paper beats stone, if stone beats scissor..." the game uses a neat little math trick:

```
📄 Paper = 1     🪨 Stone = 2     ✂️ Scissor = 3

If the gap between the two numbers is 1  → the SMALLER number wins
If the gap between the two numbers is 2  → the BIGGER number wins
If the numbers are the same              → it's a draw
```

This works because Paper → Stone → Scissor → back to Paper forms a **circle**, so the one special case (Paper vs. Scissor) needs the opposite rule from all the others. Neat, right? 🧠✨

---

## 🗂️ What's Inside This Project

```
.
├── main.cpp              # All the game code lives here
├── README.md             # This friendly guide 👋
└── docs/
    └── screenshots/       # Pictures and GIFs of the game
```

---

## 🌟 Ideas For Making It Even Better

- [ ] Stop players from typing silly numbers (only allow 1, 2, or 3)
- [ ] Make sure the game doesn't sneak in a round if you type `0` rounds
- [ ] Make the colors work on Mac and Linux too, not just Windows
- [ ] Keep a high-score file so you can beat your own record
- [ ] Add a fun ASCII-art title screen when the game starts

Got an idea of your own? Suggestions and pull requests are always welcome! 💌

---
---

<p align="center">
  Made with ❤️ and lots of ☕ while learning C++.<br>
  <i>My first project finished all on my own — more improvements coming soon!</i>
</p>
