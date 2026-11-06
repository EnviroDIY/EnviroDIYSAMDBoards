# Arduino board support package

The **EnviroDIY SAMD Boards** package contains Arduino board support files for SAM/SAMD boards developed by EnviroDIY.
It is maintained by Stroud Water Research Center - EnviroDIY; contact [info@envirodiy.org](mailto:info@envirodiy.org).
See [https://www.envirodiy.org/](https://www.envirodiy.org/) for project information and [https://www.envirodiy.org/help/](https://www.envirodiy.org/help/) for help.

This package is version 1.0.0-dev, built on 2026-11-06.
Its source is maintained at [https://github.com/EnviroDIY/EnviroDIYSAMDBoards](https://github.com/EnviroDIY/EnviroDIYSAMDBoards).
Package archives are published from [https://github.com/EnviroDIY/Arduino_boards/raw/master/EnviroDIYSAMDBoards/](https://github.com/EnviroDIY/Arduino_boards/raw/master/EnviroDIYSAMDBoards/).
The index for the Arduino Board Manager is available at [https://raw.githubusercontent.com/EnviroDIY/Arduino_boards/refs/heads/master/package_EnviroDIY_index.json](https://raw.githubusercontent.com/EnviroDIY/Arduino_boards/refs/heads/master/package_EnviroDIY_index.json).

All boards in this package compile with a compile-time package-version macro of  `ENVIRODIY_SAMD_BOARDS`.
You can use this macro in your sketches to check the package version at compile time, for example:

```cpp
#if defined(ENVIRODIY_SAMD_BOARDS)
  Serial.println(ENVIRODIY_SAMD_BOARDS);
#endif
```

You can also check the package version at runtime by using the the macro:

```cpp
#if ENVIRODIY_SAMD_BOARDS_VERSION >= ENVIRODIY_SAMD_BOARDS_VERSION_VAL(4, 0, 0)
  Serial.println(ENVIRODIY_SAMD_BOARDS_VERSION);
#endif
```

For each individual board, you can check the compiled variant version at compile time using the the same macro code with the board-specific define name in place of the package define name.

Boards included in this package:

| Board | Version | Chip variant | `BOARD_DEFINE_NAME` |
| --- | --- | --- | --- |
| EnviroDIY Stonefly | 1.0.0 | SAMD51N20A | `STONEFLY` |
| EnviroDIY Stonefly v0.2 beta | 0.2.2 | SAMD51N19A | `STONEFLY` |
| EnviroDIY Stonefly v0.3.7 beta | 0.3.7 | SAMD51N19A | `STONEFLY` |

It relies on Adafruit's SAMD board support package; thus, users need to have that package installed.
Please see installation instructions here: https://learn.adafruit.com/add-boards-arduino-v164/setup

This package was built using tools from [Sara Damiano's fork](https://github.com/SRGDamia1/SAMD-custom-board) of [shurik179's SAMD-custom-board repository](https://github.com/shurik179/SAMD-custom-board).
