```

                                                   ::::::::::::::::::::
                                                   :::              :::
              _____       _______ __. ________ ________ ________.   :::
             _)  _//__ __/ __   /   |.\  __  /.\  __  /.\  _.   |   :::
            .\____   /.\   )/  /    ||   )/   |   )/   |   \|   |   :::
            |   )/    |     __/|     \   _____|   _____|    |   |_  :::
            |____     |_____|  |_____/____\\  |____\\  |    |____/  :::
        - -- -- \_____| -H7--------------------------- `----' ----- ::: - -
                                                   :::              :::
                                                   ::::::::::::::::::::

```

# Spleen

Spleen is a monospaced bitmap font available in 6 sizes:

- 5x8
- 6x12
- 8x16
- 12x24
- 16x32
- 32x64

Each size is provided in the Glyph Bitmap Distribution Format (BDF), and
release tarballs contain the fonts in the following formats: `PCF`, `PSF`
(for the Linux console), `OTB`, `OTF`, and `.dfont` for macOS users.

All font sizes contain all ISO/IEC 8859-1 characters (Basic Latin and Latin-1
Supplement Unicode block), Latin Extended-A characters, as well as Box Drawing,
Block Elements, and Braille Patterns Unicode blocks, except for the 5x8 and the
6x12 versions.

Due to character size constraints, the 5x8 version only contains printable
ASCII characters, the Braille Patterns Unicode block, and light Box Drawing
characters. Please also note that there is no OpenType version for this size.

As of Spleen 1.8.0, there is now a 6x12 version containing the same Unicode
blocks as the 5x8 version and the Latin-1 Supplement Unicode block.

Spleen also has support for Powerline symbols out of the box.

The font name is a reference to Baudelaire.

## Screenshots

The following screenshots show Spleen 16x32 displaying code and prose.

![Spleen - Hello][1]

![Spleen - L'etranger][2]

ASCII characters for all sizes:

Spleen 5x8:

![Spleen - ASCII characters - 5x8][3]

Spleen 6x12:

![Spleen - ASCII characters - 6x12][4]

Spleen 8x16:

![Spleen - ASCII characters - 8x16][5]

Spleen 12x24:

![Spleen - ASCII characters - 12x24][6]

Spleen 16x32:
![Spleen - ASCII characters - 16x32][7]

Spleen 32x64:
![Spleen - ASCII characters - 32x64][8]

## XLFD font names

```
-misc-spleen-medium-r-normal--8-80-72-72-c-50-iso10646-1
-misc-spleen-medium-r-normal--12-120-72-72-c-60-iso10646-1
-misc-spleen-medium-r-normal--16-160-72-72-c-80-iso10646-1
-misc-spleen-medium-r-normal--24-240-72-72-c-120-iso10646-1
-misc-spleen-medium-r-normal--32-320-72-72-c-160-iso10646-1
-misc-spleen-medium-r-normal--64-640-72-72-c-320-iso10646-1
```

## Packages

Packages are available for the following operating systems:

- [OpenBSD][9]
- [NetBSD][10]
- [FreeBSD][11]
- [Arch Linux][12]
- [Void Linux][13]
- [Nix][14]
- [Debian][15]
- [Ubuntu][16]

## Manual installation

### *BSD and Linux

Clone the repository, convert the files to the Portable Compiled Format
(PCF) using **bdftopcf** and run **mkfontdir** in the directory.

Alternatively, release tarballs provide PCF files for each size.

### macOS

macOS users should use the `.dfont` files provided in the release tarballs.

### Windows

Windows users should use the `.otf` files provided in the release tarballs.

## Usage

### *BSD and Linux

Update the font path to include **Spleen**:

	xset +fp /usr/local/share/fonts/spleen/

Update **.Xdefaults** and add one of the following directives:

	xterm*faceName: spleen:pixelsize=8:antialias=false
	xterm*faceName: spleen:pixelsize=12:antialias=false
	xterm*faceName: spleen:pixelsize=16:antialias=false
	xterm*faceName: spleen:pixelsize=24:antialias=false
	xterm*faceName: spleen:pixelsize=32:antialias=false
	xterm*faceName: spleen:pixelsize=64:antialias=false

Launch **xterm**.

Ubuntu has bitmap fonts support disabled by default, instructions to enable
it are available [here][17].

### Linux console

Release tarballs provide PSF files for each size, `setfont` can be used
to load and set the desired font.

### NetBSD console

NetBSD has .fnt files for each size which can be loaded using wsfontload(8).

For example, to load Spleen 16x32:

	wsfontload -N spleen-16x32 -w 16 -h 32 /usr/share/wscons/fonts/spleen-16x32.fnt
	wsconsctl -dw font=spleen-16x32

### FreeBSD console

The FreeBSD package contains .fnt files which can be loaded using
vidcontrol(1).

For example, to load Spleen 16x32:

	vidcontrol -f /usr/local/share/fonts/spleen/spleen-16x32.fnt

### OpenType versions

Spleen release tarballs now contains OTF versions generated automatically
from the BDF files, using [bdf2sfd][18]. Each font has a different name,
allowing them to be installed alongside.

They should be used in the exact size specified below, with anti-aliasing
disabled.

- Spleen 6x12: 9 Pt (12 pixels)
- Spleen 8x16: 12 Pt (16 pixels)
- Spleen 12x24: 18 Pt (24 pixels)
- Spleen 16x32: 24 Pt (32 pixels)
- Spleen 32x64: 48 Pt (64 pixels)

## License

Spleen is released under the BSD 2-Clause license. See `LICENSE` file for
details.

## Author

Spleen is developed by Frederic Cambus.

- Site: https://www.cambus.net

## Resources

GitHub: https://github.com/fcambus/spleen


## Trivia

- Spleen is the default font for OpenBSD consoles since January 2019
- Spleen was imported in the NetBSD src tree in March 2019
- Spleen 12x24 is used in the Haiku [kernel debugger][19] (on high resolution
  displays) since May 2021

[1]: https://www.cambus.net/content/2018/09/spleen-hello.png
[2]: https://www.cambus.net/content/2018/09/spleen-etranger.png
[3]: https://www.cambus.net/files/spleen/spleen-5x8.png
[4]: https://www.cambus.net/files/spleen/spleen-6x12.png
[5]: https://www.cambus.net/files/spleen/spleen-8x16.png
[6]: https://www.cambus.net/files/spleen/spleen-12x24.png
[7]: https://www.cambus.net/files/spleen/spleen-16x32.png
[8]: https://www.cambus.net/files/spleen/spleen-32x64.png
[9]: https://cvsweb.openbsd.org/cgi-bin/cvsweb/ports/fonts/spleen/
[10]: https://pkgsrc.se/fonts/spleen
[11]: https://www.freshports.org/x11-fonts/spleen/
[12]: https://aur.archlinux.org/packages/spleen-font/
[13]: https://github.com/void-linux/void-packages/tree/master/srcpkgs/font-spleen
[14]: https://github.com/NixOS/nixpkgs/tree/master/pkgs/data/fonts/spleen
[15]: https://packages.debian.org/search?keywords=spleen
[16]: https://packages.ubuntu.com/search?keywords=spleen
[17]: https://wiki.ubuntu.com/Fonts#Enabling_Bitmapped_Fonts
[18]: https://github.com/fcambus/bdf2sfd
[19]: https://git.haiku-os.org/haiku/commit/?id=29a109bd6c01ce71bb61177ee9ff0417e74c1e18
