/**
 * Portuguese
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_PT_H
#define LANGUAGE_PT_H

#define WELCOME_MSG							MACHINE_NAME " pronto."
#define MSG_SD_INSERTED                     "Cartao inserido"
#define MSG_SD_REMOVED                      "Cartao removido"
#define MSG_MAIN                            " Menu principal \003"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                " Apagar motores"
#define MSG_AUTO_HOME                       "Ir para origen"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Estabelecer orig."
#define MSG_PREHEAT_PLA                     "Pre-aquecer PLA"
#define MSG_PREHEAT_PLA0                    " pre-aquecer PLA 1"
#define MSG_PREHEAT_PLA1                    " pre-aquecer PLA 2"
#define MSG_PREHEAT_PLA2                    " pre-aquecer PLA 3"
#define MSG_PREHEAT_PLA012                  " pre-aq. PLA Tudo"
#define MSG_PREHEAT_PLA_BEDONLY             " pre-aq. PLA \002Base"
#define MSG_PREHEAT_PLA_SETTINGS            "PLA setting"
#define MSG_PREHEAT_ABS                     "Pre-aquecer ABS"
#define MSG_PREHEAT_ABS0                    " pre-aquecer ABS 1"
#define MSG_PREHEAT_ABS1                    " pre-aquecer ABS 2"
#define MSG_PREHEAT_ABS2                    " pre-aquecer ABS 3"
#define MSG_PREHEAT_ABS012                  " pre-aq. ABS Tudo"
#define MSG_PREHEAT_ABS_BEDONLY             " pre-aq. ABS \002Base"
#define MSG_PREHEAT_ABS_SETTINGS            "ABS setting"
#define MSG_COOLDOWN                        "Esfriar"
#define MSG_SWITCH_PS_ON                    "Switch Power On"
#define MSG_SWITCH_PS_OFF                   "Switch Power Off"
#define MSG_EXTRUDE                         "Extrudar"
#define MSG_RETRACT                         "Retrair"
#define MSG_MOVE_AXIS                       "Mover eixo      \x7E"
#define MSG_MOVE_X                          "Move X"
#define MSG_MOVE_Y                          "Move Y"
#define MSG_MOVE_Z                          "Move Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_E1                         "Extruder2"
#define MSG_MOVE_E2                         "Extruder3"
#define MSG_MOVE_01MM                       "Move 0.1mm"
#define MSG_MOVE_1MM                        "Move 1mm"
#define MSG_MOVE_10MM                       "Move 10mm"
#define MSG_SPEED                           "Velocidade:"
#define MSG_NOZZLE                          "\002Nozzle:"
#define MSG_NOZZLE1                         "\002Nozzle2:"
#define MSG_NOZZLE2                         "\002Nozzle3:"
#define MSG_BED                             "\002Base:"
#define MSG_FAN_SPEED                       "Velocidade vento."
#define MSG_FLOW                            "Fluxo:"
#define MSG_FLOW0                           "Fluxo0:"
#define MSG_FLOW1                           "Fluxo1:"
#define MSG_FLOW2                           "Fluxo2:"
#define MSG_CONTROL                         "Controle \003"
#define MSG_MIN                             "\002 Min:"
#define MSG_MAX                             "\002 Max:"
#define MSG_FACTOR                          "\002 Fact:"
#define MSG_AUTOTEMP                        "Autotemp:"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P: "
#define MSG_PID_I                           "PID-I: "
#define MSG_PID_D                           "PID-D: "
#define MSG_PID_C                           "PID-C: "
#define MSG_PID_P1                          "PID-P E2: "
#define MSG_PID_I1                          "PID-I E2: "
#define MSG_PID_D1                          "PID-D E2: "
#define MSG_PID_C1                          "PID-C E2: "
#define MSG_PID_P2                          "PID-P E3: "
#define MSG_PID_I2                          "PID-I E3: "
#define MSG_PID_D2                          "PID-D E3: "
#define MSG_PID_C2                          "PID-C E3: "
#define MSG_ACC                             "Acc:"
#define MSG_VXY_JERK                        "Vxy-jerk: "
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            " Vmax "
#define MSG_X                               "x:"
#define MSG_Y                               "y:"
#define MSG_Z                               "z:"
#define MSG_E                               "e:"
#define MSG_VMIN                            "Vmin:"
#define MSG_VTRAV_MIN                       "VTrav min:"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract:"
#define MSG_XSTEPS                          "Xpasso/mm:"
#define MSG_YSTEPS                          "Ypasso/mm:"
#define MSG_ZSTEPS                          "Zpasso/mm:"
#define MSG_ESTEPS                          "Epasso/mm:"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimento"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		        "E in mm3"
#define MSG_FILAMENT_SIZE_EXTRUDER_0        "Fil. Dia. 1"
#define MSG_FILAMENT_SIZE_EXTRUDER_1        "Fil. Dia. 2"
#define MSG_FILAMENT_SIZE_EXTRUDER_2        "Fil. Dia. 3"
#define MSG_CONTRAST                        "Contrast"
#define MSG_STORE_EPROM                     "Guardar memoria"
#define MSG_LOAD_EPROM                      "Carregar memoria"
#define MSG_RESTORE_FAILSAFE                "Rest. de emergen."
#define MSG_REFRESH                         "\004Recarregar"
#define MSG_WATCH                           "Monitorar   \003"
#define MSG_PREPARE                         "Preparar \x7E"
#define MSG_TUNE                            "Tune    \x7E"
#define MSG_PAUSE_PRINT                     "Pausar impressao"
#define MSG_RESUME_PRINT                    "Resumir impressao"
#define MSG_STOP_PRINT                      "Parar impressao"
#define MSG_CARD_MENU                       "Menu cartao SD"
#define MSG_NO_CARD                         "Sem cartao SD"
#define MSG_DWELL                           "Repouso..."
#define MSG_USERWAIT                        "Esperando ordem"
#define MSG_RESUMING                        "Resuming print"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Sem movimento"
#define MSG_KILLED                          "PARADA DE EMERG."
#define MSG_STOPPED                         "PARADA. "
#define MSG_CONTROL_RETRACT                 " Retrair mm:"
#define MSG_CONTROL_RETRACT_SWAP            "Troca Retrair mm:"
#define MSG_CONTROL_RETRACTF                " Retrair  V:"
#define MSG_CONTROL_RETRACT_ZLIFT           " Levantar mm:"
#define MSG_CONTROL_RETRACT_RECOVER         " DesRet +mm:"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Troca DesRet +mm:"
#define MSG_CONTROL_RETRACT_RECOVERF        " DesRet  V:"
#define MSG_AUTORETRACT                     " AutoRetr.:"
#define MSG_FILAMENTCHANGE                  "Change filament"
#define MSG_INIT_SDCARD                     "Init. SD-Card"
#define MSG_CNG_SDCARD                      "Change SD-Card"
#define MSG_ZPROBE_OUT                      "Son. fora da mesa"
#define MSG_POSITION_UNKNOWN                "XY antes de Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#define MSG_RECTRACT                        "Retrair"
#define MSG_MAIN_WIDE                       "Menu Principal  \003"
#define MSG_PREPARE_ALT                     "Preparar \003"
#define MSG_CONTROL_ARROW                   "Controle \x7E"
#define MSG_RETRACT_ARROW                   "Retrair \x7E"
#define MSG_STEPPER_RELEASED                "Lancado."

#endif // LANGUAGE_PT_H
