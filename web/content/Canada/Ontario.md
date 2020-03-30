---
categories:
- Canada
date: "2016-10-29"
layout: post
tagline: Four Tips
tags:
- Canada
title: Ontario, Canada
chart: true
menu:
  sidebar:
    name: Ontario
    parent: Canada
---


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
         "2020-01-26",
         "2020-01-27",
         "2020-01-28",
         "2020-01-29",
         "2020-01-30",
         "2020-01-31",
         "2020-02-01",
         "2020-02-02",
         "2020-02-03",
         "2020-03-09",
         "2020-03-10",
         "2020-03-11",
         "2020-03-12",
         "2020-03-13",
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
               1.0,
               1.0,
               1.0,
               1.0,
               2.0,
               2.0,
               3.0,
               3.0,
               3.0,
               34.0,
               36.0,
               41.0,
               42.0,
               74.0,
               79.0,
               104.0,
               177.0,
               185.0,
               221.0,
               257.0,
               308.0,
               377.0,
               425.0,
               503.0,
               588.0,
               688.0,
               858.0,
               994.0,
               1144.0,
               1355.0
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
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
               1.0,
               2.0,
               3.0,
               5.0,
               6.0,
               7.0,
               8.0,
               13.0,
               18.0,
               18.0,
               21.0
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
         "2020-01-26",
         "2020-01-27",
         "2020-01-28",
         "2020-01-29",
         "2020-01-30",
         "2020-01-31",
         "2020-02-01",
         "2020-02-02",
         "2020-02-03",
         "2020-03-09",
         "2020-03-10",
         "2020-03-11",
         "2020-03-12",
         "2020-03-13",
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
               "0.00",
               "0.00",
               "0.00",
               "100.00",
               "0.00",
               "50.00",
               "0.00",
               "0.00",
               "1033.33",
               "5.88",
               "13.89",
               "2.44",
               "76.19",
               "6.76",
               "31.65",
               "70.19",
               "4.52",
               "19.46",
               "16.29",
               "19.84",
               "22.40",
               "12.73",
               "18.35",
               "16.90",
               "17.01",
               "24.71",
               "15.85",
               "15.09",
               "18.44"
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
               "0.00",
               "0.00",
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
               "50.00",
               "66.67",
               "20.00",
               "16.67",
               "14.29",
               "62.50",
               "38.46",
               "0.00",
               "16.67"
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
         "2020-01-26",
         "2020-01-27",
         "2020-01-28",
         "2020-01-29",
         "2020-01-30",
         "2020-01-31",
         "2020-02-01",
         "2020-02-02",
         "2020-02-03",
         "2020-03-09",
         "2020-03-10",
         "2020-03-11",
         "2020-03-12",
         "2020-03-13",
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
               "inf",
               "inf",
               "inf",
               "1.00",
               "inf",
               "1.71",
               "inf",
               "inf",
               "0.29",
               "12.13",
               "5.33",
               "28.76",
               "1.22",
               "10.60",
               "2.52",
               "1.30",
               "15.68",
               "3.90",
               "4.59",
               "3.83",
               "3.43",
               "5.78",
               "4.11",
               "4.44",
               "4.41",
               "3.14",
               "4.71",
               "4.93",
               "4.09"
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
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "1.00",
               "1.71",
               "1.36",
               "3.80",
               "4.50",
               "5.19",
               "1.43",
               "2.13",
               "inf",
               "4.50"
            ]
         }
      ]
   }
}
```

> The above plot shows how long the disease takes to double. This number needs consistently above 14 to halt the spread of the disease. Holes in the data mean the measurement was the same from the previous day (so it would take forever to double.
