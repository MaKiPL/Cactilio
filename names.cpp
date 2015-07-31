#include "names.h"

/***************************************************
 * Names file: generation of all combo boxes names *
 ***************************************************/

//Thanks to kaspar01 from qhimm for making that list :I
QStringList CreateStageList(){
    QStringList btlscn;
    btlscn  << "Balamb Garden Quad"
            << "Dollet Bridge"
            << "Dollet Trasmission Tower path"
            << "Dollet Transmission Tower (Top)"
            << "Dollet Transmission Tower (Elevator)"
            << "Dollet Transmission Tower (Elevator 2 ?)"
            << "Dollet City ? (Spice Spice Shop)"
            << "Balamb Garden entrance gate"
            << "Balamb Garden 1st Floor Hall"
            << "Balamb Garden 2nd Floor Corridor"
            << "Balamb Garden(Flyng Form) Quad"
            << "Balamb Garden Outer Corridor"
            << "Balamb Garden Training Center (elevator zone)"
            << "Balamb Garden Norg's Floor"
            << "Balamb Garden Underground Levels (Tube)"
            << "Balamb Garden Underground levels (falling ladder zone?)"
            << "Balamb Garden Underground levels (OilBoil Zone?)"
            << "Timber Pub Area"
            << "Timber Maniacs square"
            << "Train (Deling Presidential Vagon)"
            << "Deling City Sewers"
            << "Deling City (Caraway Residence secret exit path?)"
            << "Balamb Garden Class Room"
            << "Galbadia Garden Corridor ?"
            << "Galbadia Garden Corridor 2 ?"
            << "Galbadia Missile Base"
            << "Deep Sea Research Center (Entrance?)"
            << "Balamb Town (Balamb Hotel road)"
            << "Balamb Town (Balamb Hotel Hall)"
            << "? Diabolous Lair?"
            << "Fire Cavern (path)"
            << "Fire Cavern (Ifrit Lair)"
            << "Galbadia Garden Hall"
            << "Galbadia Garden Auditorium (Edea's battle?)"
            << "Galbadia Garden Auditorium 2? (Edea's battle?)"
            << "Galbadia Garden Corridor"
            << "Galbadia Garden (Ice Hockey Field)"
            << "?? Some broken wall place..Ultimecia Castle?"
            << "StarField?"
            << "Desert Prison? (elevator?)"
            << "Desert Prison? (Floor?)"
            << "Eshtar City (road)"
            << "Desert Prison? (Top?)"
            << "Eshtar City (road2 ?)"
            << "Missile Base? Hangar?"
            << "Missile Base? Hangar2?"
            << "Missile Base? Control room?"
            << "Winhill Village main square"
            << "Tomb of the Unknown King (Corridor)?"
            << "Eshtar City (road 3 ?)"
            << "Tomb of the Unknown King (Boss Fight room)?"
            << "Fisherman Horizon (Road)"
            << "Fisherman Horizon (Train Station Square)"
            << "Desert Prison? (Floor?)"
            << "Salt Lake?"
            << "Ultima Weapon Stage"
            << "Salt Lake 2?"
            << "Eshtar Road"
            << "Ultimecia's Castle (bridge)"
            << "Eshtar (square?)"
            << "Eshtar (?)"
            << "Eshtar (cave?)"
            << "Eshtar (cave2?)"
            << "Eshtar (Centra excavation site)"
            << "Eshtar (Centra excavation site)"
            << "Eshtar (Centra excavation site)"
            << "Eshtar (Centra excavation site)"
            << "Lunatic Pandora?"
            << "Lunatic Pandora"
            << "Lunatic Pandora(Adel?)"
            << "(Centra excavation site)"
            << "(Centra excavation site)"
            << "(Centra excavation site)"
            << "(Centra excavation site)"
            << "? ?"
            << "(Centra excavation site)"
            << "Centra Ruins (Lower Level)"
            << "Centra Ruins (Tower Level)"
            << "Centra Ruins (Tower Level)"
            << "Centra Ruins (Odin Room)"
            << "Centra excavation site (Entrance)"
            << "Trabia Canyon"
            << "Ragnarok?"
            << "Ragnarok?"
            << "? Diabolous Lair?"
            << "Deep Sea Research Center (Entrance)"
            << "Deep Sea Research Center"
            << "Deep Sea Research Center"
            << "Deep Sea Research Center"
            << "Deep Sea Research Center"
            << "Deep Sea Research Center"
            << "Deep Sea Research Center"
            << "? ?"
            << "? Eshtar shops?"
            << "Tear's Point"
            << "Eshtar"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Deling City (Edea's Room)"
            << "Balamb Plains?"
            << "Desert Canyon?"
            << "Desert?"
            << "Snow-Covered Plains? (Trabia Region?)"
            << "Wood"
            << "Snow-Covered Wood"
            << "Balamb Isle? (Beach zone?)"
            << "?Snow Beach?"
            << "Eshtar City"
            << "Eshtar City"
            << "Generic Landscape? Dirt Ground"
            << "Generic Landscape? Grass Ground"
            << "Generic Landscape? Dirt Ground"
            << "Generic Landscape? Snow Covered Mountains"
            << "Eshtar City"
            << "Eshtar City"
            << "Generic Landscape?"
            << "Eshtar City"
            << "Eshtar City"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Generic Landscape?"
            << "Generic Landscape?"
            << "Generic Landscape?"
            << "Generic Landscape?"
            << "Generic Landscape?"
            << "Generic Landscape?"
            << "Eshtar City"
            << "Generic Landscape?"
            << "Generic Landscape? (Beach at night?)"
            << "Deling City (Edea's Room)"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle (Tiamat)"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Ultimecia's Castle"
            << "Eshtar City"
            << "Lunatic Pandora Lab"
            << "Lunatic Pandora Lab"
            << "Edea's Parade Vehicle"
            << "Tomb of the Unknown King (Boss Fight room)?"
            << "Desert Prison?"
            << "Galbadian something?"
            << "Generic Landscape?"
            << "Generic Landscape?"
            << "Balamb Garden (External Corridor?)"
            << "Balamb Garden (External Corridor?)"
            << "Balamb Garden (External Corridor?)"
            << "Balamb Garden (External Corridor?)"
            << "Balamb Garden (External Corridor?)"
            << "Generic Landscape?"
            << "Generic Landscape?"
            << "Generic Landscape?"
            << "Test Environment? (UV tile texture)"
            << "Generic Landscape?"
            << "Generic Landscape?";
    return btlscn;
}

//Still need to differenciate some enemies
QStringList CreateEnemyList(){
    QStringList enemynames;
    enemynames  << "Dummy"
                << "GIM52A"
                << "Blobra"
                << "Thrustaevis"
                << "Geezard"
                << "Belhelmel"
                << "Glacial Eye"
                << "SAM08G"
                << "GIM47N"
                << "Mesmerize"
                << "Buel"
                << "Sphinxaur"
                << "Sphinxara"
                << "Snow Lion"
                << "Anacondaur"
                << "Grat"
                << "Cockatrice"
                << "Caterchipillar"
                << "Red Bat"
                << "Blitz"
                << "Fastitocalon"
                << "Fastitocalon(Fake)"
                << "Gesper"
                << "Creeps"
                << "Hexadragon"
                << "Blood Soul"
                << "Elastoi"
                << "Armadodo"
                << "Bite Bug"
                << "Jelleye"
                << "Tripoint"
                << "Turtapod"
                << "Wendigo"
                << "Gayla"
                << "Gerogero"
                << "Death Claw"
                << "Tri-Gace"
                << "Grand Mantis"
                << "Brysta"
                << "Lefty"
                << "Righty"
                << "Blue Dragon"
                << "Forbidden"
                << "Bomb"
                << "Abyss Worm"
                << "Ochu"
                << "Adamantoise"
                << "Chimera"
                << "Malboro"
                << "Iron Giant"
                << "Behemoth"
                << "T-Rexaur"
                << "Ruby Dragon"
                << "Grendel"
                << "Vysage"
                << "Cactuar"
                << "Tonberry"
                << "Torama"
                << "Funguar"
                << "Imp"
                << "PuPu"
                << "Ifrit"
                << "Minotaur"
                << "Sacred"
                << "Base Leader"
                << "Cerberus"
                << "Diablos"
                << "bahamut"
                << "NORG Pod"
                << "Garden Faculty"
                << "Odin"
                << "G-Soldier"
                << "Elite Soldier"
                << "Wedge"
                << "Biggs"
                << "Fake President"
                << "Guard"
                << "NORG"
                << "Esthar Soldier"
                << "Esthar Soldier(Stronger)"
                << "Right Orb"
                << "Left Orb"
                << "Ginblade"
                << "Tonberry King"
                << "Jumbo Cactuar"
                << "Seifer"
                << "Seifer"
                << "Seifer"
                << "Edea"
                << "Propagator(Purple)"
                << "Ultima Weapon"
                << "Elvoret"
                << "X-ATM092"
                << "Iguion"
                << "Gargantua"
                << "Granaldo"
                << "Raldo"
                << "Propagator(Dark Green)"
                << "Propagator(Yellow)"
                << "Oilboyle"
                << "edea"
                << "BGH251F2"
                << "BGH251F2"
                << "Abadon"
                << "Abadon"
                << "Mobile Type 8"
                << "Left Probe"
                << "Right Probe"
                << "Paratrooper"
                << "Trauma"
                << "Droma"
                << "Propagator(Red)"
                << "Adel"
                << "* (Rinoa on Adel's battle)"
                << "Omega Weapon"
                << "Sorceress (1st)"
                << "Sorceress (2nd)"
                << "Sorceress (Wormlike)"
                << "UFO?"
                << "Fujin"
                << "Raijin"
                << "Ultimecia"
                << "Griever"
                << "(That ball crap when you kill Griever)"
                << "Ultimecia(Griever fusion)"
                << "Helix"
                << "Ultimecia(Final)"
                << "Ultimecia(No model, under final)"
                << "Seifer"
                << "Slapper"
                << "Red Giant"
                << "Elnoyle"
                << "Tiamat"
                << "Catoblepas"
                << "Wedge"
                << "Biggs"
                << "Fujin"
                << "Rajin"
                << "UFO?"
                << "UFO?"
                << "UFO?"
                << "UFO?"
                << "Gunblade"
                << "Base Soldier";
        return enemynames;
}