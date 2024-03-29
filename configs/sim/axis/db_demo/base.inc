#-----------------------------------------
# include file for common stanzas

[DISPLAY]
OPEN_FILE=./base.ngc
POSITION_OFFSET=RELATIVE
POSITION_FEEDBACK=ACTUAL
DISPLAY = axis
MAX_LINEAR_VELOCITY = 1
# placeholder for a user supplied editor for a db_program:
TOOL_EDITOR = ./db_editor.tcl
PYVCP = ./db_panel.xml

[TASK]
TASK = milltask
CYCLE_TIME = 0.001

[EMCMOT]
EMCMOT = motmod
SERVO_PERIOD = 1000000

[HAL]
HALUI=halui
HALFILE = LIB:basic_sim.tcl -no_use_hal_manualtoolchange
POSTGUI_HALFILE = db_postgui.hal

[TRAJ]
NO_FORCE_HOMING = 1

COORDINATES = XYZ
LINEAR_UNITS = inch
ANGULAR_UNITS = degree

[KINS]
JOINTS = 3
KINEMATICS = trivkins coordinates=XYZ

[JOINT_0]
TYPE = LINEAR
MAX_VELOCITY=1e99
MAX_ACCELERATION=1e99
HOME_SEQUENCE=0

[JOINT_1]
TYPE = LINEAR
MAX_VELOCITY=1e99
MAX_ACCELERATION=1e99
HOME_SEQUENCE=0

[JOINT_2]
TYPE = LINEAR
MAX_VELOCITY=1e99
MAX_ACCELERATION=1e99
HOME_SEQUENCE=0
