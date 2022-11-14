# Nova75

A 75 key ortholinear keyboard designed as a RP2040 powered version of keyboards like the ID75/XD75.

---

## Looks like this
![](./assets/photo1.jpg?raw=true)

---
## Fab Help

The provided files have been used with JLCPCB. If you're using another fab generate the files according to their specifications.

If you are using JLCPCB (and they have the parts in stock) then head over to JLCPCB and upload the gerber in `jlcpcb/gerber`.

Using mostly the defaults on the order screen check the following:

**Main**
* Dimensions `284.7` x `94.21`
* PCB Color - Whatever you like
* Surface Finish - Whatever you can afford
* Remover Order Number - Specify a location (it's already specified)

**PCB Assembly**
* PCB Assembly - Yes
* Assemble bottom side
* Tooling holes - Added by Customer
* Confirm Parts Placement - Yes

**BOM and Placement**

For the BOM use: `jlcpcb/assembly/BOM-nova75.csv`

For the CPL use: `jlcpcb/assembly/POS-nova75.csv`

Select the PCB description - Office / Keyboard

The next screen should be a list of parts, something like this where you can find out if they have everything:

![](./assets/bom-review.png?raw=true)

Continue on to the placement. Previously all holes lined up, but for some reason JLC preview is not working right now, so the preview will look similar to this with the holes misaligned:

![](./assets/parts-placement.png?raw=true)

Rotate components the correct way. JLC will check best they can, but you need to do this too.

**That's it. Now wait.**

## Case

The `Case & Plates` dir has some stl files for 3D printing the plates.

Also included is a zip containing the dxf files I sent off for the stacked acrylic case seen below.

## Couple more pictures

![](./assets/photo2.jpg?raw=true)
![](./assets/photo3.jpg?raw=true)
