#include "Locale.hpp"

String Locale::deabbreviate_country(const String & abbr){
	if( abbr == "HongKongSAR"){ return "HongKong"; }
	if( abbr == "Taiwan*"){ return "Taiwan"; }
	if( abbr == "China"){ return "MainlandChina"; }
	if( abbr == "UK"){ return "UnitedKingdom"; }
	if( abbr == "UnitedKingdoms"){ return "UnitedKingdom"; }
	if( abbr == "Korea,South"){ return "SouthKorea"; }
	if( abbr == "Korea, South"){ return "SouthKorea"; }
	return abbr;
}

String Locale::deabbreviate_state(const String & abbr){
	if( (abbr == "AK") || ( abbr == "ALASKA" ) ){ return "Alaska"; }
	if( (abbr == "AZ") || ( abbr == "ARIZONA" ) ){ return "Arizona"; }
	if( (abbr == "AL") || ( abbr == "ALABAMA" ) ){ return "Alabama"; }
	if( (abbr == "AR") || ( abbr == "ARKANSAS" ) ){ return "Arkansas"; }
	if( (abbr == "CA") || ( abbr == "CALIFORNIA" ) ){ return "California"; }
	if( (abbr == "CO") || ( abbr == "COLORADO" ) ){ return "Colorado"; }
	if( (abbr == "CT") || ( abbr == "CONNECTICUT" ) ){ return "Connecticut"; }
	if( (abbr == "DE") || ( abbr == "DELAWARE" ) ){ return "Delaware"; }
	if( (abbr == "FL") || ( abbr == "FLORIDA" ) ){ return "Florida"; }
	if( (abbr == "GA") || ( abbr == "GEORGIA" ) ){ return "Georgia"; }
	if( (abbr == "HI") || ( abbr == "HAWAII" ) ){ return "Hawaii"; }
	if( (abbr == "ID") || ( abbr == "IDAHO" ) ){ return "Idaho"; }
	if( (abbr == "IL") || ( abbr == "ILLINOIS" ) ){ return "Illinois"; }
	if( (abbr == "IN") || ( abbr == "INDIANA" ) ){ return "Indiana"; }
	if( (abbr == "IA") || ( abbr == "IOWA" ) ){ return "Iowa"; }
	if( (abbr == "KS") || ( abbr == "KANSAS" ) ){ return "Kansas"; }
	if( (abbr == "KY") || ( abbr == "KENTUCKY" ) ){ return "Kentucky"; }
	if( (abbr == "LA") || ( abbr == "LOUISIANA" ) ){ return "Louisiana"; }
	if( (abbr == "ME") || ( abbr == "MAINE" ) ){ return "Maine"; }
	if( (abbr == "MD") || ( abbr == "MARYLAND" ) ){ return "Maryland"; }
	if( (abbr == "MA") || ( abbr == "MASSACHUSETTS" ) ){ return "Massachusetts"; }
	if( (abbr == "MI") || ( abbr == "MICHIGAN" ) ){ return "Michigan"; }
	if( (abbr == "MN") || ( abbr == "MINNESOTA" ) ){ return "Minnesota"; }
	if( (abbr == "MS") || ( abbr == "MISSISSIPPI" ) ){ return "Mississippi"; }
	if( (abbr == "MO") || ( abbr == "MISSOURI" ) ){ return "Missouri"; }
	if( (abbr == "MT") || ( abbr == "MONTANA" ) ){ return "Montana"; }
	if( (abbr == "NE") || ( abbr == "NEBRASKA" ) ){ return "Nebraska"; }
	if( (abbr == "NV") || ( abbr == "NEVADA" ) ){ return "Nevada"; }
	if( (abbr == "NH") || ( abbr == "NEWHAMPSHIRE" ) ){ return "NewHampshire"; }
	if( (abbr == "NJ") || ( abbr == "NEWJERSEY" ) ){ return "NewJersey"; }
	if( (abbr == "NM") || ( abbr == "NEWMEXICO" ) ){ return "NewMexico"; }
	if( (abbr == "NY") || ( abbr == "NEWYORK" ) ){ return "NewYork"; }
	if( (abbr == "NC") || ( abbr == "NORTHCAROLINA" ) ){ return "NorthCarolina"; }
	if( (abbr == "ND") || ( abbr == "NORTHDAKOTA" ) ){ return "NorthDakota"; }
	if( (abbr == "OH") || ( abbr == "OHIO" ) ){ return "Ohio"; }
	if( (abbr == "OK") || ( abbr == "OKLAHOMA" ) ){ return "Oklahoma"; }
	if( (abbr == "OR") || ( abbr == "OREGON" ) ){ return "Oregon"; }
	if( (abbr == "PA") || ( abbr == "PENNSYLVANIA" ) ){ return "Pennsylvania"; }
	if( (abbr == "RI") || ( abbr == "RHODEISLAND" ) ){ return "RhodeIsland"; }
	if( (abbr == "SC") || ( abbr == "SOUTHCAROLINA" ) ){ return "SouthCarolina"; }
	if( (abbr == "SD") || ( abbr == "SOUTHDAKOTA" ) ){ return "SouthDakota"; }
	if( (abbr == "TN") || ( abbr == "TENNESSEE" ) ){ return "Tennessee"; }
	if( (abbr == "TX") || ( abbr == "TEXAS" ) ){ return "Texas"; }
	if( (abbr == "UT") || ( abbr == "UTAH" ) ){ return "Utah"; }
	if( (abbr == "VT") || ( abbr == "VERMONT" ) ){ return "Vermont"; }
	if( (abbr == "VA") || ( abbr == "VIRGINIA" ) ){ return "Virginia"; }
	if( (abbr == "WA") || ( abbr == "WASHINGTON" ) ){ return "Washington"; }
	if( (abbr == "WV") || ( abbr == "WESTVIRGINIA" ) ){ return "WestVirginia"; }
	if( (abbr == "WI") || ( abbr == "WISCONSIN" ) ){ return "Wisconsin"; }
	if( (abbr == "WY") || ( abbr == "WYOMING" ) ){ return "Wyoming"; }
	if( (abbr == "DC") || ( abbr == "DISTRICTOFCOLUMBIA" ) ){ return "DistrictofColumbia"; }
	if( (abbr == "MH") || ( abbr == "MARSHALLISLANDS" ) ){ return "MarshallIslands"; }
	if( (abbr == "AE") || ( abbr == "ARMEDFORCESAFRICA" ) ){ return "ArmedForcesAfrica"; }
	if( (abbr == "AA") || ( abbr == "ARMEDFORCESAMERICAS" ) ){ return "ArmedForcesAmericas"; }
	if( (abbr == "AE") || ( abbr == "ARMEDFORCESCANADA" ) ){ return "ArmedForcesCanada"; }
	if( (abbr == "AE") || ( abbr == "ARMEDFORCESEUROPE" ) ){ return "ArmedForcesEurope"; }
	if( (abbr == "AE") || ( abbr == "ARMEDFORCESMIDDLE EAST" ) ){ return "ArmedForcesMiddleEast"; }
	if( (abbr == "AP") || ( abbr == "ARMEDFORCESPACIFIC" ) ){ return "ArmedForcesPacific"; }
	return abbr;
}
