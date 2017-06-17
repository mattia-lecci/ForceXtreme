;============================================================================
; GPU1 Meter
;============================================================================

[GPU1UsageString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="GPU 1"

[GPU1PercentageString]
Meter=STRING
MeasureName=MSIABGPU1Usage
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU1UsageBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU1UsageBar]
Meter=BAR
MeasureName=MSIABGPU1Usage
X=0r
Y=0r
W=160
H=7
BarColor=FF00FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU1 Temperature
;============================================================================

[GPU1TemperatureString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Temp"

[GPU1TemperatureValueString]
Meter=STRING
MeasureName=MSIABGPU1Temperature
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1°C"

[GPU1TemperatureBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU1TemperatureBar]
Meter=BAR
MeasureName=MSIABGPU1Temperature
X=0r
Y=0r
W=160
H=7
BarColor=#colour11#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU1 FanSpeed
;============================================================================

[GPU1FanSpeedString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Fan"

[GPU1FanSpeedValueString]
Meter=STRING
MeasureName=MSIABGPU1FanSpeed
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU1FanSpeedBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU1FanSpeedBar]
Meter=BAR
MeasureName=MSIABGPU1FanSpeed
X=0r
Y=0r
W=160
H=7
BarColor=20A0FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU2 Meter
;============================================================================

[GPU2UsageString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="GPU 2"

[GPU2PercentageString]
Meter=STRING
MeasureName=MSIABGPU2Usage
X=242
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU2UsageBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU2UsageBar]
Meter=BAR
MeasureName=MSIABGPU2Usage
X=0r
Y=0r
W=160
H=7
BarColor=00FFFF
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU2 Temperature
;============================================================================

[GPU2TemperatureString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Temp"

[GPU2TemperatureValueString]
Meter=STRING
MeasureName=MSIABGPU2Temperature
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1°C"

[GPU2TemperatureBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU2TemperatureBar]
Meter=BAR
MeasureName=MSIABGPU2Temperature
X=0r
Y=0r
W=160
H=7
BarColor=#colour11#
BarOrientation=HORIZONTAL
AntiAlias=#AA#

;============================================================================
; GPU2 FanSpeed
;============================================================================

[GPU2FanSpeedString]
Meter=STRING
X=30
Y=15r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="Fan"

[GPU2FanSpeedValueString]
Meter=STRING
MeasureName=MSIABGPU2FanSpeed
X=242
Y=0r
FontColor=#colour11#
FontSize=8
FontFace=#font1_name#
StringEffect=Border
FontEffectColor=000000
AntiAlias=#AA#
Text="%1%"

[GPU2FanSpeedBarBack]
Meter=IMAGE
X=75
Y=3r
W=160
H=7
SolidColor=#colour7#
AntiAlias=#AA#
UpdateDivider=3600

[GPU2FanSpeedBar]
Meter=BAR
MeasureName=MSIABGPU2FanSpeed
X=0r
Y=0r
W=160
H=7
BarColor=20A0FF
BarOrientation=HORIZONTAL
AntiAlias=#AA#
