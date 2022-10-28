    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtP.L
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.d
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.v
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.BicycleKinematicModel_InitialState
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.BicycleKinematicModel_MaxSteeringAngle
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 6;

                    ;% rtP.BicycleKinematicModel_VehicleSpeedRange
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 7;

                    ;% rtP.BicycleKinematicModel_WheelBase
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 10;

                    ;% rtP.FromWorkspace1_Time0
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 11;

                    ;% rtP.FromWorkspace1_Data0
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 180012;

                    ;% rtP.FromWorkspace_Time0
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 360013;

                    ;% rtP.FromWorkspace_Data0
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 540014;

                    ;% rtP.Gain_Gain
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 720015;

                    ;% rtP.Integrator1_IC
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 720016;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtB.kusgqhxytc
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.plbv1cocpa
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.kspqb0c2ki
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% rtB.khzscda3ph
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 7;

                    ;% rtB.kj3tksixi1
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% rtB.abmrnhnnfz
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 9;

                    ;% rtB.jgbddpaxfy
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 10;

                    ;% rtB.c4go1p3qce
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

                    ;% rtB.jzgfedf1ea
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.mo5w51i13m
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.a1zmwvov3f
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 14;
            section.data(14)  = dumData; %prealloc

                    ;% rtDW.fe5uc1bie0.LoggedData
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dvyjjmaj4a.LoggedData
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 3;

                    ;% rtDW.cn0cvwb2ax.AQHandles
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 7;

                    ;% rtDW.d5sksq0fq2.TimePtr
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 8;

                    ;% rtDW.dxtbgibew0.AQHandles
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 9;

                    ;% rtDW.egyf5jgm11.TimePtr
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 10;

                    ;% rtDW.fx1yyaz2pk.AQHandles
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 11;

                    ;% rtDW.ahfmijeqvd.AQHandles
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 12;

                    ;% rtDW.bqsprob3xz.AQHandles
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 13;

                    ;% rtDW.fvzjprysz3.AQHandles
                    section.data(10).logicalSrcIdx = 11;
                    section.data(10).dtTransOffset = 14;

                    ;% rtDW.mla0qiaiyr.AQHandles
                    section.data(11).logicalSrcIdx = 12;
                    section.data(11).dtTransOffset = 15;

                    ;% rtDW.i5b5f5gswt.AQHandles
                    section.data(12).logicalSrcIdx = 13;
                    section.data(12).dtTransOffset = 16;

                    ;% rtDW.evmpntopbw.AQHandles
                    section.data(13).logicalSrcIdx = 14;
                    section.data(13).dtTransOffset = 17;

                    ;% rtDW.dhg1dsnm2b.AQHandles
                    section.data(14).logicalSrcIdx = 15;
                    section.data(14).dtTransOffset = 18;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.jexlkyqrpd.PrevIndex
                    section.data(1).logicalSrcIdx = 16;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ppku20gijp.PrevIndex
                    section.data(2).logicalSrcIdx = 17;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.p0fcrc55ex
                    section.data(1).logicalSrcIdx = 18;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 2194112766;
    targMap.checksum1 = 2281534096;
    targMap.checksum2 = 3844149734;
    targMap.checksum3 = 1956017030;

