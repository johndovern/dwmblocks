//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/    /*Update Interval*/  /*Update Signal*/
  {"",  "sb-tasks",  10,  8},
  /* {"",  "sb-media-monitor", 1, 12}, */
  {"",  "sb-yt-monitor",  0,  12},
  {"",  "sb-mpv-music",  1,  21},
  {"",  "sb-mpv",  1,  22},
  {"",  "sb-music",  1,  11},
  {"",  "sb-memory",  10,  6},
  {"",  "sb-cpu",    10,  5},
  {"",  "sb-volume",  0,  10},
  {"",  "sb-battery",  5,  4},
  {"",  "sb-forecast",  18000,  23},
  {"",  "sb-clock",  60,  3},
  {"",  "sb-internet",  5,  2},
  {"",  "sb-actions",  0,  1},
  /* {"", "cat /tmp/recordingicon 2>/dev/null",  0,  9}, */
  /* {"",  "sb-pacpackages",  0,  8}, */
  /* {"⌨", "sb-kbselect", 0, 30}, */
  /* {"",  "sb-news",    0,  6}, */
  /* {"",  "sb-doppler",  0,  31}, */
  /* {"",  "sb-price lbc \"LBRY Token\" 📚",      9000,  22}, */
  /* {"",  "sb-price bat \"Basic Attention Token\" 🦁",  9000,  20}, */
  /* {"",  "sb-price link \"Chainlink\" 🔗",      300,  25}, */
  /* {"",  "sb-price xmr \"Monero\" 🔒",      9000,  24}, */
  /* {"",  "sb-price eth Ethereum 🍸",  9000,  23}, */
  /* {"",  "sb-price btc Bitcoin 💰",        9000,  21}, */
  /* {"",  "sb-torrent",  20,  7}, */
  /* {"",  "sb-moonphase",  18000,  17}, */
  /* {"",  "sb-mailbox",  180,  12}, */
  /* {"",  "sb-nettraf",  1,  16}, */
  /* {"",  "sb-help-icon",  0,  15}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "\0";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

