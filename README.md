# Phantom

An ortholinear WASD optimized gaming keypad

<div align="center">
  <img src="https://i.imgur.com/ouFygpE.png" alt="Geopad" width="838"/>
</div>

## Design Files
Design files are all on the cloud
- [PCB (EasyEDA)](https://easyeda.com/geocipher/phantom)
- [Case (Onshape)](https://cad.onshape.com/documents/dbda5693b40a7bc2ccdd639a/w/846729df4491243848816a00/e/3b0d7331e1da385ccecf5c3d)
- [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/be78f234d304392bfcd8f41bcfa9a9c5)

## Compiling

This keyboard supports *via* , just compile the *via* keymap through `qmk`. Or, flash the built `geopad_via.hex`.

```
qmk compile -kb geopad -km via
make geocine/phantom:via
```
Once via is running you can import the keymap `firmware/keymaps/via/phantom.json`