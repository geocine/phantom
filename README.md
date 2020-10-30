# Phantom

An ortholinear WASD optimized gaming keypad

<div align="center">
  <img src="https://i.imgur.com/ouFygpE.png" alt="Geopad" width="838"/>
</div>
</br/>

If you are looking for version 1 please check the [v1 tag](https://github.com/geocine/Geopad/tree/v1)

## Design Files
Design files are all on the cloud
- [PCB (EasyEDA)](https://easyeda.com/geocipher/phantom)
- [Case (Onshape)](https://cad.onshape.com/documents/dbda5693b40a7bc2ccdd639a/w/846729df4491243848816a00/e/3b0d7331e1da385ccecf5c3d)
- [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/#/gists/be78f234d304392bfcd8f41bcfa9a9c5)

## Usage

This keyboard supports *via* , just compile the *via* keymap through `qmk`. Or, flash the built `geopad_phantom_via.hex`.

```
make geocine/phantom:via
```
To flash the firmware, you can either use the QMK Toolbox GUI or through this command
```
qmk flash -kb geocine/phantom -km via
```
Once via is running you can import the keymap `firmware/keymaps/via/phantom.json`