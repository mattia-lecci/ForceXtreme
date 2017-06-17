;============================================================================
; Show content with album art
;============================================================================

;----------------------------------------------------------------------------
; iTunes song meter
;----------------------------------------------------------------------------

[MeterMaxBar]
Meter=Bar
MeasureName=mMaxPercent
X=30
Y=5
W=240
H=5
BarColor=202060
BarOrientation=HORIZONTAL
UpdateDivider=3600

[MeterPositionPercent]
Meter=Bar
MeasureName=mPositionPercent
X=30
Y=5
W=240
H=4
BarColor=FFFFFF
BarOrientation=HORIZONTAL

;----------------------------------------------------------------------------
; iTunes controls
;----------------------------------------------------------------------------
[PrevTunes]
Meter=Image
ImageName="images\prev.png"
x=90
Y=73
AntiAlias=1
LeftMouseUpAction=!RainmeterPluginBang "mPrev"

[NextTunes]
Meter=Image
ImageName="images\next.png"
x=180
Y=73
AntiAlias=1
LeftMouseUpAction=!RainmeterPluginBang "mNext"

[PauseTunes]
Meter=Image
ImageName="images\pause.png"
X=120
Y=73
AntiAlias=1
LeftMouseUpAction=!RainmeterPluginBang "mPause"

[PlayTunes]
Meter=Image
ImageName="images\play.png"
X=150
Y=73
AntiAlias=1
LeftMouseUpAction=!RainmeterPluginBang "mPlay"

;----------------------------------------------------------------------------
; iTunes song information
;----------------------------------------------------------------------------

[MeterCurrentArtist]
Meter=STRING
MeasureName=mArtist
X=150
Y=12
W=240
H=24
FontColor=FFFFFF
FontFace=Calibri
FontSize=12
StringStyle=Normal
StringAlign=center
ClipString=1
FontEffectColor=000000
AntiAlias=1
Text="%1"

[MeterCurrentAlbumName]
Meter=STRING
MeasureName=mAlbumName
X=150
Y=32
W=240
H=24
FontColor=FFFFFF
FontFace=Calibri
FontSize=12
StringStyle=Normal
StringAlign=center
ClipString=1
FontEffectColor=000000
AntiAlias=1
Text="%1"

[MeterCurrentTrack]
Meter=STRING
MeasureName=mTrack
X=150
Y=50
W=240
H=24
FontColor=FFFFFF
FontFace=Calibri
FontSize=12
StringStyle=Normal
StringAlign=center
ClipString=1
FontEffectColor=000000
AntiAlias=1
Text="%1"

[MeterCurrentTrackTime]
Meter=STRING
MeasureName=mCurrentTrackTime
X=270
Y=66
FontColor=FFFFFF
FontFace=Calibri
FontSize=11
StringStyle=Normal
StringAlign=right
FontEffectColor=000000
AntiAlias=1
Text="Total#CRLF#%1"

[mPlayerPosition]
Measure=Plugin
Plugin=Plugins\iTunesPlugin.dll
Command=GetPlayerPosition
MaxValue=100

[mMin]
Measure=Calc
Formula=(mPlayerPosition - (mPlayerPosition % 60)) /60

[mSec1]
Measure=Calc
Formula=(mPlayerPosition % 60) < 10 ? 0 : 1
Substitute="1":""

[mSec2]
Measure=Calc
Formula=mPlayerPosition % 60

[MeterPlayerPosition]
Meter=STRING
MeasureName=mMin
MeasureName2=mSec1
MeasureName3=mSec2
X=30
Y=66
FontColor=FFFFFF
FontFace=Calibri
FontSize=11
FontEffectColor=000000
StringStyle=Normal
StringAlign=LEFT
Text="Current#CRLF#%1:%2%3"
AntiAlias=1
