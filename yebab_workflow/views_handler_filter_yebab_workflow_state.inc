<?php
// $Id: views_handler_filter_node_type.inc,v 1.2 2009/06/02 17:57:48 merlinofchaos Exp $
/**
 * Filter by node type
 */
class views_handler_filter_yebab_workflow_state extends views_handler_filter_in_operator {
  function get_value_options() {
    if (!isset($this->value_options)) {
      
     $states = array_merge(array('pending' => 'pending' , 'published' => 'published', 'rejected' => 'rejected', 'needs improvement' => 'needs improvement'), yebab_workflow_get_custom_states());
     foreach ($states as $state) {
        $options[$state] = t($state);
      }
      $this->value_options = $options;
    }
  }
}




