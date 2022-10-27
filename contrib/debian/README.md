
Debian
====================
This directory contains files used to package beggard/beggar-qt
for Debian-based Linux systems. If you compile beggard/beggar-qt yourself, there are some useful files here.

## pivx: URI support ##


beggar-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install beggar-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your beggar-qt binary to `/usr/bin`
and the `../../share/pixmaps/beggar128.png` to `/usr/share/pixmaps`

beggar-qt.protocol (KDE)

