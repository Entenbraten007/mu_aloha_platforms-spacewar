APRIORI DXE {
    # Core Komponenten vom Projekt (Source)
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    # CPU & Interrupts (Source)
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

    # Qualcomm Basis-Treiber (Binaries)
    INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
    INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
    INF AndromedaPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf
    INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
    INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/HWIODxe/HWIODxe.inf

    # Display & Power (Reihenfolge ist wichtig!)
    INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
    INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
    INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

    #INF KodiakPkg/Device/$(TARGET_DEVICE)/Binaries/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
}
