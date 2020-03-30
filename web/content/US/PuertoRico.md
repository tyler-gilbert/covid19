---
categories:
- US
date: "2016-10-29"
layout: post
tagline: Four Tips
tags:
- US
title: PuertoRico, US
chart: true
menu:
  sidebar:
    name: PuertoRico
    parent: US
---

- [State Overview](#state-overview)
- [County List](#county-list)

# Demographics
- Average Age: 50.90 years old
- Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "157638",
               "185956",
               "207704",
               "230407",
               "240838",
               "222881",
               "199171",
               "209558",
               "215099",
               "218156",
               "227538",
               "217688",
               "213684",
               "195828",
               "163772",
               "122154",
               "83314",
               "75555"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.62",
               "52.38"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

# COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-14",
         "2020-03-15",
         "2020-03-16",
         "2020-03-17",
         "2020-03-18",
         "2020-03-19",
         "2020-03-20",
         "2020-03-21",
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               3.0,
               5.0,
               5.0,
               5.0,
               5.0,
               5.0,
               14.0,
               21.0,
               23.0,
               31.0,
               39.0,
               51.0,
               64.0,
               79.0,
               100.0,
               127.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
               2.0,
               2.0,
               2.0,
               2.0,
               3.0,
               3.0,
               3.0
            ]
         }
      ]
   }
}
```

> The above plot shows the number of cases and deaths from COVID19. The y-axis using a logarithmic scale. This means each tick is tens times greater than the previous one. A straight line indicates constant exponential growth. We want to see the line flatten out.

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-14",
         "2020-03-15",
         "2020-03-16",
         "2020-03-17",
         "2020-03-18",
         "2020-03-19",
         "2020-03-20",
         "2020-03-21",
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "66.67",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "180.00",
               "50.00",
               "9.52",
               "34.78",
               "25.81",
               "30.77",
               "25.49",
               "23.44",
               "26.58",
               "27.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "100.00",
               "0.00",
               "0.00",
               "0.00",
               "50.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

> The above plot shows the daily increase as a percentage of the day before. A value of 100 means it doubled from the previous day. This value needs to be consistenly below 5 percent to stop the disease from spreading.

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-14",
         "2020-03-15",
         "2020-03-16",
         "2020-03-17",
         "2020-03-18",
         "2020-03-19",
         "2020-03-20",
         "2020-03-21",
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "1.36",
               "inf",
               "inf",
               "inf",
               "inf",
               "0.67",
               "1.71",
               "7.62",
               "2.32",
               "3.02",
               "2.58",
               "3.05",
               "3.29",
               "2.94",
               "2.90"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "1.00",
               "inf",
               "inf",
               "inf",
               "1.71",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```

> The above plot shows how long the disease takes to double. This number needs consistently above 14 to halt the spread of the disease. Holes in the data mean the measurement was the same from the previous day (so it would take forever to double.

# County List

- [AascoMunicipio](#aascomunicipio)
- [AdjuntasMunicipio](#adjuntasmunicipio)
- [AguadaMunicipio](#aguadamunicipio)
- [AguadillaMunicipio](#aguadillamunicipio)
- [AguasBuenasMunicipio](#aguasbuenasmunicipio)
- [AibonitoMunicipio](#aibonitomunicipio)
- [AreciboMunicipio](#arecibomunicipio)
- [ArroyoMunicipio](#arroyomunicipio)
- [BarcelonetaMunicipio](#barcelonetamunicipio)
- [BarranquitasMunicipio](#barranquitasmunicipio)
- [BayamnMunicipio](#bayamnmunicipio)
- [CaboRojoMunicipio](#caborojomunicipio)
- [CaguasMunicipio](#caguasmunicipio)
- [CamuyMunicipio](#camuymunicipio)
- [CanvanasMunicipio](#canvanasmunicipio)
- [CarolinaMunicipio](#carolinamunicipio)
- [CataoMunicipio](#cataomunicipio)
- [CayeyMunicipio](#cayeymunicipio)
- [CeibaMunicipio](#ceibamunicipio)
- [CialesMunicipio](#cialesmunicipio)
- [CidraMunicipio](#cidramunicipio)
- [CoamoMunicipio](#coamomunicipio)
- [ComeroMunicipio](#comeromunicipio)
- [CorozalMunicipio](#corozalmunicipio)
- [CulebraMunicipio](#culebramunicipio)
- [DoradoMunicipio](#doradomunicipio)
- [FajardoMunicipio](#fajardomunicipio)
- [FloridaMunicipio](#floridamunicipio)
- [GuayamaMunicipio](#guayamamunicipio)
- [GuayanillaMunicipio](#guayanillamunicipio)
- [GuaynaboMunicipio](#guaynabomunicipio)
- [GunicaMunicipio](#gunicamunicipio)
- [GuraboMunicipio](#gurabomunicipio)
- [HatilloMunicipio](#hatillomunicipio)
- [HormiguerosMunicipio](#hormiguerosmunicipio)
- [HumacaoMunicipio](#humacaomunicipio)
- [IsabelaMunicipio](#isabelamunicipio)
- [JayuyaMunicipio](#jayuyamunicipio)
- [JuanaDazMunicipio](#juanadazmunicipio)
- [JuncosMunicipio](#juncosmunicipio)
- [LajasMunicipio](#lajasmunicipio)
- [LaresMunicipio](#laresmunicipio)
- [LasMarasMunicipio](#lasmarasmunicipio)
- [LasPiedrasMunicipio](#laspiedrasmunicipio)
- [LozaMunicipio](#lozamunicipio)
- [LuquilloMunicipio](#luquillomunicipio)
- [ManatMunicipio](#manatmunicipio)
- [MaricaoMunicipio](#maricaomunicipio)
- [MaunaboMunicipio](#maunabomunicipio)
- [MayagezMunicipio](#mayagezmunicipio)
- [MocaMunicipio](#mocamunicipio)
- [MorovisMunicipio](#morovismunicipio)
- [NaguaboMunicipio](#naguabomunicipio)
- [NaranjitoMunicipio](#naranjitomunicipio)
- [OrocovisMunicipio](#orocovismunicipio)
- [PatillasMunicipio](#patillasmunicipio)
- [PeuelasMunicipio](#peuelasmunicipio)
- [PonceMunicipio](#poncemunicipio)
- [QuebradillasMunicipio](#quebradillasmunicipio)
- [RincnMunicipio](#rincnmunicipio)
- [RoGrandeMunicipio](#rograndemunicipio)
- [SabanaGrandeMunicipio](#sabanagrandemunicipio)
- [SalinasMunicipio](#salinasmunicipio)
- [SanGermnMunicipio](#sangermnmunicipio)
- [SanJuanMunicipio](#sanjuanmunicipio)
- [SanLorenzoMunicipio](#sanlorenzomunicipio)
- [SanSebastinMunicipio](#sansebastinmunicipio)
- [SantaIsabelMunicipio](#santaisabelmunicipio)
- [ToaAltaMunicipio](#toaaltamunicipio)
- [ToaBajaMunicipio](#toabajamunicipio)
- [TrujilloAltoMunicipio](#trujilloaltomunicipio)
- [UtuadoMunicipio](#utuadomunicipio)
- [VegaAltaMunicipio](#vegaaltamunicipio)
- [VegaBajaMunicipio](#vegabajamunicipio)
- [ViequesMunicipio](#viequesmunicipio)
- [VillalbaMunicipio](#villalbamunicipio)
- [YabucoaMunicipio](#yabucoamunicipio)
- [YaucoMunicipio](#yaucomunicipio)

## AascoMunicipio

### Demographics
   - Average Age: 47.95 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1136",
               "1257",
               "1820",
               "1850",
               "1899",
               "1689",
               "1540",
               "1695",
               "1830",
               "1946",
               "1956",
               "1823",
               "1693",
               "1847",
               "1225",
               "1203",
               "554",
               "405"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.38",
               "51.62"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## AdjuntasMunicipio

### Demographics
   - Average Age: 49.15 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "883",
               "1073",
               "1189",
               "1192",
               "1290",
               "1156",
               "1083",
               "1008",
               "1123",
               "1185",
               "1267",
               "1265",
               "1237",
               "1217",
               "659",
               "550",
               "449",
               "355"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.74",
               "51.26"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## AguadaMunicipio

### Demographics
   - Average Age: 47.91 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1683",
               "2229",
               "1978",
               "2552",
               "2689",
               "2527",
               "2230",
               "2471",
               "2335",
               "2612",
               "2969",
               "2804",
               "2907",
               "2227",
               "1794",
               "1334",
               "711",
               "591"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.92",
               "51.08"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## AguadillaMunicipio

### Demographics
   - Average Age: 49.62 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2409",
               "2793",
               "3525",
               "3754",
               "3620",
               "3356",
               "3147",
               "3338",
               "3443",
               "3404",
               "3497",
               "3367",
               "3610",
               "3534",
               "2839",
               "2109",
               "1425",
               "996"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.57",
               "51.43"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## AguasBuenasMunicipio

### Demographics
   - Average Age: 50.44 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1128",
               "1381",
               "1827",
               "1826",
               "1786",
               "1711",
               "1560",
               "1478",
               "1897",
               "1634",
               "1847",
               "1852",
               "1610",
               "1542",
               "1139",
               "978",
               "507",
               "572"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.55",
               "51.45"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## AibonitoMunicipio

### Demographics
   - Average Age: 51.06 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1137",
               "1468",
               "1195",
               "1333",
               "1727",
               "1573",
               "1347",
               "1440",
               "1180",
               "1479",
               "1726",
               "1670",
               "1743",
               "1459",
               "1094",
               "800",
               "582",
               "504"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.02",
               "51.98"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## AreciboMunicipio

### Demographics
   - Average Age: 52.47 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "3975",
               "4373",
               "5174",
               "5890",
               "6145",
               "5649",
               "4833",
               "5341",
               "5522",
               "5895",
               "5962",
               "5239",
               "5479",
               "5239",
               "4593",
               "3610",
               "2227",
               "2096"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.90",
               "52.10"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## ArroyoMunicipio

### Demographics
   - Average Age: 47.15 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "875",
               "864",
               "1587",
               "1256",
               "1223",
               "1119",
               "1110",
               "1116",
               "1292",
               "1132",
               "1097",
               "987",
               "1204",
               "1012",
               "989",
               "524",
               "425",
               "299"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.01",
               "52.99"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## BarcelonetaMunicipio

### Demographics
   - Average Age: 48.13 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1264",
               "1294",
               "1608",
               "1680",
               "1731",
               "1654",
               "1481",
               "1454",
               "1966",
               "1607",
               "1499",
               "1076",
               "1559",
               "1276",
               "1271",
               "955",
               "477",
               "447"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.50",
               "52.50"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## BarranquitasMunicipio

### Demographics
   - Average Age: 44.74 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1677",
               "1910",
               "1817",
               "2204",
               "2311",
               "2126",
               "1839",
               "1971",
               "1337",
               "1775",
               "2047",
               "1741",
               "1853",
               "1316",
               "1112",
               "766",
               "508",
               "445"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.25",
               "50.75"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## BayamnMunicipio

### Demographics
   - Average Age: 54.03 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "8186",
               "9364",
               "10149",
               "11869",
               "13099",
               "13289",
               "11548",
               "11520",
               "10390",
               "11031",
               "12318",
               "12050",
               "10954",
               "9928",
               "8855",
               "7812",
               "5593",
               "5000"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.23",
               "52.77"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CaboRojoMunicipio

### Demographics
   - Average Age: 51.12 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1957",
               "2512",
               "3071",
               "3253",
               "3203",
               "2826",
               "2524",
               "2932",
               "3485",
               "3514",
               "3252",
               "2872",
               "2938",
               "2982",
               "2857",
               "2358",
               "1515",
               "954"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.42",
               "52.58"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CaguasMunicipio

### Demographics
   - Average Age: 50.70 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "5835",
               "7105",
               "8298",
               "8851",
               "9130",
               "8574",
               "7909",
               "9257",
               "7797",
               "8725",
               "8894",
               "8615",
               "7606",
               "7410",
               "6123",
               "4947",
               "3411",
               "2876"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "46.56",
               "53.44"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CamuyMunicipio

### Demographics
   - Average Age: 52.28 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1423",
               "1694",
               "1965",
               "2195",
               "2317",
               "2051",
               "1781",
               "2306",
               "1849",
               "2257",
               "2256",
               "2165",
               "2003",
               "2091",
               "1513",
               "1101",
               "441",
               "814"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.87",
               "52.13"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CanvanasMunicipio

### Demographics
   - Average Age: 45.72 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2368",
               "2778",
               "3032",
               "3243",
               "3279",
               "3042",
               "2599",
               "3170",
               "3225",
               "3354",
               "3306",
               "2487",
               "2930",
               "2542",
               "1776",
               "1498",
               "796",
               "683"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.20",
               "51.80"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CarolinaMunicipio

### Demographics
   - Average Age: 53.28 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "7087",
               "8234",
               "8963",
               "10450",
               "11238",
               "10331",
               "8891",
               "9538",
               "10436",
               "10353",
               "10500",
               "9804",
               "8802",
               "9255",
               "8333",
               "7250",
               "3948",
               "4040"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "45.83",
               "54.17"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CataoMunicipio

### Demographics
   - Average Age: 51.79 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1251",
               "1726",
               "1295",
               "1738",
               "1755",
               "1758",
               "1573",
               "1417",
               "1454",
               "1404",
               "1653",
               "1850",
               "1543",
               "1479",
               "961",
               "830",
               "559",
               "642"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.27",
               "52.73"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CayeyMunicipio

### Demographics
   - Average Age: 51.12 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1950",
               "2830",
               "2168",
               "3041",
               "3078",
               "2967",
               "2545",
               "2380",
               "3112",
               "2959",
               "3116",
               "3013",
               "2852",
               "2910",
               "2024",
               "1532",
               "1075",
               "978"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.01",
               "51.99"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CeibaMunicipio

### Demographics
   - Average Age: 54.15 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "536",
               "530",
               "805",
               "703",
               "951",
               "778",
               "637",
               "654",
               "768",
               "782",
               "776",
               "517",
               "812",
               "804",
               "682",
               "533",
               "264",
               "321"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.75",
               "52.25"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CialesMunicipio

### Demographics
   - Average Age: 48.46 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "911",
               "1034",
               "960",
               "1091",
               "1153",
               "1120",
               "999",
               "788",
               "1079",
               "1042",
               "1192",
               "1191",
               "1241",
               "976",
               "818",
               "555",
               "473",
               "289"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.72",
               "51.28"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CidraMunicipio

### Demographics
   - Average Age: 46.58 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1981",
               "2316",
               "2501",
               "2798",
               "2821",
               "2702",
               "2462",
               "2651",
               "2528",
               "2711",
               "2896",
               "2832",
               "2679",
               "1941",
               "2056",
               "1101",
               "753",
               "614"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.48",
               "51.52"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CoamoMunicipio

### Demographics
   - Average Age: 45.00 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1799",
               "2244",
               "2735",
               "2562",
               "2373",
               "2435",
               "2446",
               "2627",
               "2806",
               "2702",
               "2702",
               "2741",
               "2607",
               "2402",
               "1640",
               "1108",
               "900",
               "436"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.53",
               "51.47"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## ComeroMunicipio

### Demographics
   - Average Age: 49.79 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "955",
               "824",
               "1581",
               "1320",
               "1428",
               "1424",
               "1249",
               "1165",
               "1205",
               "1195",
               "1417",
               "1443",
               "1062",
               "1006",
               "907",
               "597",
               "324",
               "437"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.60",
               "50.40"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CorozalMunicipio

### Demographics
   - Average Age: 48.13 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1760",
               "2203",
               "2106",
               "2376",
               "2457",
               "2347",
               "2121",
               "2184",
               "1988",
               "2115",
               "2403",
               "2181",
               "2222",
               "1988",
               "1287",
               "1122",
               "644",
               "661"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.49",
               "51.51"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## CulebraMunicipio

### Demographics
   - Average Age: 57.13 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "56",
               "87",
               "83",
               "55",
               "58",
               "145",
               "118",
               "41",
               "52",
               "57",
               "106",
               "59",
               "110",
               "62",
               "66",
               "74",
               "42",
               "43"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.45",
               "48.55"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## DoradoMunicipio

### Demographics
   - Average Age: 45.28 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1840",
               "2116",
               "2830",
               "2675",
               "2368",
               "2073",
               "2119",
               "2589",
               "2958",
               "2782",
               "2477",
               "1915",
               "2422",
               "2185",
               "1505",
               "1064",
               "791",
               "499"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.65",
               "52.35"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## FajardoMunicipio

### Demographics
   - Average Age: 51.32 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1625",
               "1710",
               "2047",
               "2190",
               "2363",
               "2124",
               "1660",
               "1743",
               "2151",
               "2199",
               "2037",
               "1946",
               "1544",
               "1768",
               "1788",
               "1225",
               "1151",
               "730"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "46.71",
               "53.29"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## FloridaMunicipio

### Demographics
   - Average Age: 47.61 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "622",
               "671",
               "771",
               "846",
               "899",
               "837",
               "556",
               "801",
               "935",
               "724",
               "760",
               "562",
               "906",
               "622",
               "598",
               "361",
               "226",
               "213"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.80",
               "52.20"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## GuayamaMunicipio

### Demographics
   - Average Age: 47.05 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1905",
               "2616",
               "2529",
               "3049",
               "3151",
               "3127",
               "2697",
               "2386",
               "2968",
               "2643",
               "2607",
               "2715",
               "2340",
               "2142",
               "1937",
               "1258",
               "916",
               "720"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.74",
               "50.26"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## GuayanillaMunicipio

### Demographics
   - Average Age: 50.47 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "929",
               "1038",
               "1349",
               "1320",
               "1248",
               "1212",
               "1133",
               "1017",
               "1324",
               "1150",
               "1178",
               "1050",
               "1421",
               "1154",
               "990",
               "647",
               "434",
               "414"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.75",
               "52.25"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## GuaynaboMunicipio

### Demographics
   - Average Age: 55.30 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "3615",
               "4416",
               "4379",
               "5262",
               "5924",
               "5765",
               "5450",
               "5686",
               "5378",
               "5830",
               "6343",
               "5950",
               "6475",
               "4811",
               "4825",
               "3160",
               "2948",
               "2446"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.15",
               "52.85"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## GunicaMunicipio

### Demographics
   - Average Age: 52.13 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "877",
               "918",
               "1063",
               "1075",
               "1122",
               "1008",
               "906",
               "1038",
               "993",
               "1020",
               "968",
               "919",
               "1146",
               "1088",
               "1131",
               "701",
               "423",
               "387"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.21",
               "51.79"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## GuraboMunicipio

### Demographics
   - Average Age: 44.70 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2047",
               "2684",
               "3336",
               "3351",
               "3247",
               "3068",
               "2926",
               "3943",
               "3228",
               "3444",
               "3266",
               "2624",
               "2816",
               "2479",
               "1616",
               "1223",
               "980",
               "616"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.28",
               "52.72"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## HatilloMunicipio

### Demographics
   - Average Age: 49.60 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1677",
               "2111",
               "2584",
               "2658",
               "2665",
               "2631",
               "2446",
               "2563",
               "2766",
               "2844",
               "2795",
               "2397",
               "2692",
               "2219",
               "2275",
               "1414",
               "892",
               "761"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.05",
               "51.95"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## HormiguerosMunicipio

### Demographics
   - Average Age: 61.99 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "598",
               "861",
               "811",
               "1035",
               "955",
               "839",
               "790",
               "877",
               "1120",
               "1082",
               "996",
               "961",
               "1037",
               "1048",
               "1149",
               "894",
               "510",
               "617"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "46.11",
               "53.89"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## HumacaoMunicipio

### Demographics
   - Average Age: 51.45 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2511",
               "2916",
               "3072",
               "3641",
               "3517",
               "3236",
               "2921",
               "3652",
               "3137",
               "3464",
               "3524",
               "3756",
               "3427",
               "3655",
               "2667",
               "1755",
               "1437",
               "1178"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.26",
               "52.74"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## IsabelaMunicipio

### Demographics
   - Average Age: 52.07 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1771",
               "2283",
               "2599",
               "2833",
               "2856",
               "2686",
               "2450",
               "2619",
               "3062",
               "2954",
               "2951",
               "2685",
               "2750",
               "2214",
               "2384",
               "1297",
               "1008",
               "1018"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.63",
               "51.37"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## JayuyaMunicipio

### Demographics
   - Average Age: 49.43 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "796",
               "876",
               "1077",
               "1043",
               "1174",
               "1058",
               "918",
               "838",
               "1043",
               "943",
               "967",
               "824",
               "1049",
               "700",
               "708",
               "355",
               "181",
               "356"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.83",
               "50.17"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## JuanaDazMunicipio

### Demographics
   - Average Age: 46.64 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2550",
               "3050",
               "3009",
               "3402",
               "3467",
               "3126",
               "2670",
               "3333",
               "2752",
               "3090",
               "3157",
               "2935",
               "2751",
               "2461",
               "2054",
               "1440",
               "902",
               "811"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.65",
               "52.35"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## JuncosMunicipio

### Demographics
   - Average Age: 45.23 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1944",
               "2315",
               "2789",
               "2790",
               "2847",
               "2708",
               "2573",
               "2682",
               "3162",
               "2661",
               "2426",
               "2312",
               "2070",
               "1998",
               "1453",
               "1162",
               "632",
               "604"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.61",
               "52.39"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## LajasMunicipio

### Demographics
   - Average Age: 53.90 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "967",
               "1266",
               "1270",
               "1512",
               "1589",
               "1412",
               "1188",
               "1296",
               "1402",
               "1512",
               "1483",
               "1532",
               "1593",
               "1624",
               "1381",
               "1023",
               "696",
               "569"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.70",
               "51.30"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## LaresMunicipio

### Demographics
   - Average Age: 50.16 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1266",
               "1230",
               "1732",
               "1717",
               "1788",
               "1731",
               "1623",
               "1383",
               "1873",
               "1676",
               "1812",
               "1916",
               "1622",
               "1765",
               "1163",
               "1073",
               "556",
               "525"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.25",
               "50.75"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## LasMarasMunicipio

### Demographics
   - Average Age: 47.72 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "461",
               "534",
               "511",
               "549",
               "605",
               "578",
               "476",
               "464",
               "534",
               "518",
               "587",
               "542",
               "616",
               "550",
               "393",
               "303",
               "241",
               "137"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.23",
               "51.77"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## LasPiedrasMunicipio

### Demographics
   - Average Age: 47.45 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1703",
               "1951",
               "2802",
               "2554",
               "2495",
               "2472",
               "2447",
               "2879",
               "2644",
               "2519",
               "2366",
               "2234",
               "2492",
               "2191",
               "1554",
               "1132",
               "677",
               "656"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.09",
               "51.91"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## LozaMunicipio

### Demographics
   - Average Age: 47.66 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1254",
               "1771",
               "1679",
               "1814",
               "1969",
               "1970",
               "1617",
               "1478",
               "1741",
               "1558",
               "1801",
               "2053",
               "1545",
               "1426",
               "1077",
               "712",
               "499",
               "499"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "46.62",
               "53.38"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## LuquilloMunicipio

### Demographics
   - Average Age: 50.76 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "830",
               "993",
               "1192",
               "1347",
               "1335",
               "1152",
               "981",
               "1257",
               "1095",
               "1184",
               "1164",
               "1121",
               "1175",
               "1199",
               "943",
               "704",
               "475",
               "400"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "46.93",
               "53.07"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## ManatMunicipio

### Demographics
   - Average Age: 51.54 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1957",
               "2131",
               "2595",
               "2734",
               "2744",
               "2438",
               "2256",
               "2231",
               "2551",
               "2373",
               "2538",
               "2720",
               "2552",
               "2419",
               "1984",
               "1527",
               "1024",
               "918"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.16",
               "52.84"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## MaricaoMunicipio

### Demographics
   - Average Age: 58.22 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "289",
               "277",
               "417",
               "416",
               "443",
               "313",
               "338",
               "271",
               "568",
               "415",
               "421",
               "405",
               "497",
               "387",
               "300",
               "147",
               "70",
               "228"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.48",
               "50.52"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## MaunaboMunicipio

### Demographics
   - Average Age: 49.23 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "526",
               "565",
               "714",
               "683",
               "711",
               "670",
               "569",
               "419",
               "872",
               "708",
               "784",
               "796",
               "735",
               "704",
               "626",
               "500",
               "264",
               "177"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.09",
               "50.91"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## MayagezMunicipio

### Demographics
   - Average Age: 54.56 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "3168",
               "3853",
               "4029",
               "6228",
               "8671",
               "4620",
               "4125",
               "3440",
               "4010",
               "3939",
               "4371",
               "4451",
               "5011",
               "5009",
               "4133",
               "3436",
               "2548",
               "2213"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.77",
               "52.23"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## MocaMunicipio

### Demographics
   - Average Age: 47.05 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1779",
               "2002",
               "2563",
               "2686",
               "2588",
               "2458",
               "2278",
               "2319",
               "2493",
               "2403",
               "2576",
               "2170",
               "2618",
               "1716",
               "1921",
               "1167",
               "516",
               "619"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.85",
               "51.15"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## MorovisMunicipio

### Demographics
   - Average Age: 45.76 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1536",
               "1287",
               "2746",
               "2331",
               "2350",
               "2290",
               "1997",
               "2030",
               "1919",
               "2059",
               "2180",
               "2303",
               "1722",
               "1648",
               "1064",
               "824",
               "530",
               "504"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.61",
               "50.39"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## NaguaboMunicipio

### Demographics
   - Average Age: 45.00 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1246",
               "1842",
               "1836",
               "1885",
               "1806",
               "1809",
               "1715",
               "1765",
               "1939",
               "1625",
               "1464",
               "1527",
               "1405",
               "1557",
               "1022",
               "632",
               "819",
               "372"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "46.95",
               "53.05"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## NaranjitoMunicipio

### Demographics
   - Average Age: 51.17 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1497",
               "1493",
               "1854",
               "1939",
               "2048",
               "2044",
               "1733",
               "1795",
               "1534",
               "1763",
               "2012",
               "1913",
               "1947",
               "1421",
               "1452",
               "843",
               "574",
               "695"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.16",
               "50.84"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## OrocovisMunicipio

### Demographics
   - Average Age: 47.34 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1161",
               "1002",
               "1616",
               "1591",
               "1673",
               "1481",
               "1238",
               "1100",
               "1411",
               "1416",
               "1535",
               "1543",
               "1305",
               "1082",
               "860",
               "544",
               "458",
               "391"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.10",
               "49.90"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## PatillasMunicipio

### Demographics
   - Average Age: 47.98 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "762",
               "970",
               "1011",
               "1084",
               "1185",
               "1072",
               "923",
               "833",
               "1054",
               "1152",
               "1275",
               "1299",
               "1243",
               "1224",
               "803",
               "675",
               "537",
               "232"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.93",
               "51.07"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## PeuelasMunicipio

### Demographics
   - Average Age: 42.66 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1220",
               "1431",
               "1404",
               "1347",
               "1655",
               "1512",
               "1275",
               "1349",
               "1138",
               "1339",
               "1425",
               "1387",
               "1304",
               "970",
               "973",
               "683",
               "364",
               "208"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.56",
               "51.44"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## PonceMunicipio

### Demographics
   - Average Age: 51.18 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "7411",
               "8212",
               "8626",
               "9912",
               "10727",
               "9828",
               "8362",
               "8362",
               "8099",
               "8226",
               "8803",
               "8903",
               "9693",
               "8967",
               "7113",
               "5403",
               "3969",
               "3310"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.13",
               "51.87"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## QuebradillasMunicipio

### Demographics
   - Average Age: 48.91 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1120",
               "1006",
               "1856",
               "1605",
               "1648",
               "1573",
               "1408",
               "1710",
               "1345",
               "1560",
               "1676",
               "1646",
               "1388",
               "1338",
               "1325",
               "915",
               "478",
               "439"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.29",
               "51.71"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## RincnMunicipio

### Demographics
   - Average Age: 54.03 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "585",
               "696",
               "805",
               "833",
               "819",
               "716",
               "721",
               "1084",
               "775",
               "985",
               "1013",
               "975",
               "955",
               "993",
               "893",
               "825",
               "268",
               "328"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.96",
               "52.04"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## RoGrandeMunicipio

### Demographics
   - Average Age: 48.10 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2208",
               "3061",
               "2795",
               "3489",
               "3684",
               "3447",
               "2940",
               "3074",
               "3445",
               "3484",
               "3459",
               "3607",
               "2460",
               "3230",
               "2405",
               "1788",
               "1116",
               "858"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.26",
               "51.74"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## SabanaGrandeMunicipio

### Demographics
   - Average Age: 51.11 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1100",
               "1162",
               "1535",
               "1566",
               "1580",
               "1372",
               "1230",
               "1220",
               "1627",
               "1453",
               "1380",
               "1378",
               "1528",
               "1274",
               "1485",
               "1055",
               "630",
               "479"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.18",
               "52.82"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## SalinasMunicipio

### Demographics
   - Average Age: 46.02 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1429",
               "1827",
               "1849",
               "2222",
               "2008",
               "1786",
               "1659",
               "1566",
               "2077",
               "1799",
               "1777",
               "1770",
               "1717",
               "1575",
               "1437",
               "1128",
               "597",
               "410"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.35",
               "51.65"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## SanGermnMunicipio

### Demographics
   - Average Age: 52.42 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1504",
               "1783",
               "1752",
               "2241",
               "2377",
               "1912",
               "1627",
               "1585",
               "1947",
               "1926",
               "1994",
               "2188",
               "1895",
               "2118",
               "1938",
               "1582",
               "1029",
               "716"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.60",
               "51.40"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## SanJuanMunicipio

### Demographics
   - Average Age: 57.00 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "15949",
               "18467",
               "17536",
               "22165",
               "24055",
               "22928",
               "20561",
               "20032",
               "20969",
               "21379",
               "23182",
               "22430",
               "22412",
               "19932",
               "16824",
               "14009",
               "10538",
               "11238"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "45.77",
               "54.23"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## SanLorenzoMunicipio

### Demographics
   - Average Age: 51.00 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1678",
               "2257",
               "2091",
               "2574",
               "2635",
               "2459",
               "2333",
               "2388",
               "2391",
               "2582",
               "2743",
               "2478",
               "2714",
               "2129",
               "1607",
               "1195",
               "752",
               "867"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.72",
               "51.28"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## SanSebastinMunicipio

### Demographics
   - Average Age: 54.68 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1704",
               "2178",
               "2266",
               "2497",
               "2342",
               "2129",
               "2062",
               "2448",
               "2233",
               "2243",
               "2492",
               "2473",
               "2715",
               "2591",
               "2201",
               "1317",
               "1030",
               "1043"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.59",
               "51.41"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## SantaIsabelMunicipio

### Demographics
   - Average Age: 45.63 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1097",
               "1254",
               "1758",
               "1717",
               "1629",
               "1386",
               "1292",
               "1481",
               "1880",
               "1539",
               "1342",
               "1117",
               "1206",
               "1311",
               "729",
               "603",
               "355",
               "370"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.26",
               "51.74"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## ToaAltaMunicipio

### Demographics
   - Average Age: 45.19 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "3359",
               "4139",
               "5297",
               "5620",
               "5534",
               "5187",
               "4535",
               "5199",
               "5191",
               "5438",
               "5521",
               "4663",
               "4212",
               "3482",
               "2280",
               "1600",
               "978",
               "1170"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.06",
               "51.94"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## ToaBajaMunicipio

### Demographics
   - Average Age: 49.81 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "3786",
               "4576",
               "4776",
               "5528",
               "5564",
               "5527",
               "5065",
               "5222",
               "5216",
               "5005",
               "5271",
               "5270",
               "4601",
               "4388",
               "3845",
               "2546",
               "1842",
               "1698"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "46.89",
               "53.11"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## TrujilloAltoMunicipio

### Demographics
   - Average Age: 48.89 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2991",
               "3683",
               "4582",
               "4632",
               "4742",
               "4452",
               "4133",
               "4834",
               "4251",
               "4506",
               "4687",
               "4274",
               "4181",
               "3818",
               "3044",
               "1941",
               "1720",
               "1309"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.05",
               "52.95"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## UtuadoMunicipio

### Demographics
   - Average Age: 52.91 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1361",
               "1564",
               "1906",
               "1962",
               "1974",
               "1871",
               "1605",
               "1533",
               "1746",
               "1844",
               "2022",
               "2075",
               "2069",
               "1785",
               "1619",
               "1068",
               "662",
               "736"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.56",
               "51.44"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## VegaAltaMunicipio

### Demographics
   - Average Age: 47.42 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1857",
               "2139",
               "2765",
               "2652",
               "2661",
               "2604",
               "2306",
               "2503",
               "2391",
               "2390",
               "2467",
               "2374",
               "2191",
               "1937",
               "1736",
               "1282",
               "795",
               "674"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.83",
               "52.17"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## VegaBajaMunicipio

### Demographics
   - Average Age: 52.91 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2536",
               "2612",
               "3689",
               "3621",
               "3674",
               "3507",
               "3201",
               "3278",
               "3351",
               "3456",
               "3636",
               "3392",
               "3455",
               "2936",
               "2716",
               "1678",
               "1204",
               "1429"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.93",
               "52.07"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## ViequesMunicipio

### Demographics
   - Average Age: 56.90 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "489",
               "543",
               "566",
               "346",
               "545",
               "523",
               "504",
               "410",
               "643",
               "431",
               "646",
               "644",
               "655",
               "536",
               "502",
               "285",
               "219",
               "284"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.39",
               "50.61"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## VillalbaMunicipio

### Demographics
   - Average Age: 43.56 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1239",
               "1360",
               "1483",
               "1863",
               "1760",
               "1525",
               "1272",
               "1338",
               "1303",
               "1469",
               "1575",
               "1834",
               "1325",
               "1253",
               "1009",
               "594",
               "551",
               "240"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.58",
               "51.42"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## YabucoaMunicipio

### Demographics
   - Average Age: 52.16 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1466",
               "2098",
               "1965",
               "2333",
               "2371",
               "2122",
               "1804",
               "2072",
               "2111",
               "2217",
               "2428",
               "2263",
               "2559",
               "2048",
               "1761",
               "977",
               "722",
               "832"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.44",
               "51.56"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
## YaucoMunicipio

### Demographics
   - Average Age: 53.32 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1618",
               "2037",
               "2158",
               "2360",
               "2290",
               "2158",
               "1985",
               "2201",
               "2254",
               "2365",
               "2524",
               "2827",
               "2269",
               "2306",
               "1961",
               "1235",
               "977",
               "914"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.96",
               "52.04"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19
COVID19 Data Not Available
