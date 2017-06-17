;----------------------------------------------------------------------------
; Core1 Usage
;----------------------------------------------------------------------------

[CPU1Core1UsageHistogram]
Meter=Histogram
MeasureName=CPU1Core1
X=30
Y=5r
H=46
W=240
LineCount=1
PrimaryColor=255,0,255,150
AntiAlias=#AA#

[CPU1Core1UsageLine]
Meter=Line
MeasureName=CPU1Core1
X=30
Y=0r
H=46
W=240
LineCount=1
LineColor=FF00FF
AntiAlias=#AA#

[CPU1Core1UsageLineString]
Meter=STRING
X=30
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
StringEffect=Border
FontEffectColor=000000
MeasureName=CPU1Core1
Text="Core 1 Usage: %1%"

;============================================================================
; Separator
;============================================================================

[Spacer3]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=50r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600

;----------------------------------------------------------------------------
; Core2 Usage
;----------------------------------------------------------------------------

[CPU1Core2UsageHistogram]
Meter=Histogram
MeasureName=CPU1Core2
X=30
Y=5r
H=46
W=240
LineCount=1
PrimaryColor=0,255,255,150
AntiAlias=#AA#

[CPU1Core2UsageLine]
Meter=Line
MeasureName=CPU1Core2
X=30
Y=0r
H=46
W=240
LineCount=1
LineColor=00FFFF
AntiAlias=#AA#

[CPU1Core2UsageLineString]
Meter=STRING
X=30
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
StringEffect=Border
FontEffectColor=000000
MeasureName=CPU1Core2
Text="Core 2 Usage: %1%"

;============================================================================
; Separator
;============================================================================

[Spacer4]
Meter=IMAGE
SolidColor=#colour6#
X=26
Y=50r
H=1
W=(#WIDTH# - 26)
UpdateDivider=3600

;----------------------------------------------------------------------------
; Core3 Usage
;----------------------------------------------------------------------------

[CPU1Core3UsageHistogram]
Meter=Histogram
MeasureName=CPU1Core3
X=30
Y=5r
H=46
W=240
LineCount=1
PrimaryColor=255,255,0,150
AntiAlias=#AA#

[CPU1Core3UsageLine]
Meter=Line
MeasureName=CPU1Core3
X=30
Y=0r
H=46
W=240
LineCount=1
LineColor=FFFF00
AntiAlias=#AA#

[CPU1Core3UsageLineString]
Meter=STRING
X=30
Y=0r
FontColor=#font1_colour#
FontSize=8
FontFace=#font1_name#
AntiAlias=#AA#
StringEffect=Border
FontEffectColor=000000
MeasureName=CPU1Core3
Text="Core 3 Usage: %1%"
