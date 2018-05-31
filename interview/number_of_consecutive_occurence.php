<?php

$array = array(1,1,0,0,1,0,1,1,1,0,1,1,1);

function returnIndex($array) {


  $result_array = array('max_length' => 0, 'start' => 0, 'end'=> 0);

  for($j=0, $start =0; $j < count($array);$j++) {

    if ($array[$j] == 0) {
      $temp = $j - $start;

      if ($temp > $result_array['max_length']) {
        $result_array['max_length'] = $temp;
        $result_array['start'] = $start;
        $result_array['end'] = $j;

      }
      $start = $j + 1;
    }
  }
  return $result_array;
}

var_export(returnIndex($array));


