<?php

/**
 * Implementation of hook_views_data().
 *
 * @return array
 */
function yebab_workflow_views_data() {

  $data['yebab_workflow_states'] = array(
		'table' => array(
			'group' => t('Yebab workflow'),
			'base' => array(
				'field' => 'nid',
				'title' => t('Yebab workflow table'),
				'help' => t("Yebab workflow table to show states and comments of each node."),
				'weight' => -10,
			),
			'join' => array(
				'node' => array(
					'left_field' => 'nid',
					'field' => 'nid',
				),
			),
		),		
		'state' => array(
			'title' => t('State'), 
			'help' => t('The node state.'),
			'field' => array(
				'handler' => 'views_handler_field',
				'format' => 2,
				'click sortable' => TRUE,
			),
			'filter' => array(
				'handler' => 'views_handler_filter_yebab_workflow_state',
			),
		  'sort' => array(
        'handler' => 'views_handler_sort',
      ),
		),
		'comment' => array(
			'title' => t('Comment'), 
			'help' => t('The node comment'),
			'field' => array(
				'handler' => 'views_handler_field',
				'format' => 2,
				'click sortable' => TRUE,
			),
			'sort' => array(
        'handler' => 'views_handler_sort',
    ),
		),
		'submit' => array(
			'title' => t('Submit'), 
			'help' => t('The node submit'),
			'field' => array(
				'handler' => 'views_handler_field_boolean',
				'format' => 2,
				'click sortable' => TRUE,
			),
	 	'filter' => array(
				'handler' => 'views_handler_filter_boolean_operator',
			),
			'sort' => array(
        'handler' => 'views_handler_sort',
      ),
		),
	);
	$data['yebab_workflow_log'] = array(
		'table' => array(
			'group' => t('Yebab workflow Log'),
			'base' => array(
				'field' => 'nid',
				'title' => t('Yebab workflow log table'),
				'help' => t("Yebab workflow table to show yebabworkflow log."),
				'weight' => -10,
			),
			'join' => array(
				'node' => array(
					'left_field' => 'nid',
					'field' => 'nid',
				),
			),
		),		
		'state' => array(
			'title' => t('State'), 
			'help' => t('The node state.'),
			'field' => array(
				'handler' => 'views_handler_field',
				'format' => 2,
				'click sortable' => TRUE,
			),
		 'sort' => array(
       'handler' => 'views_handler_sort',
     ),
     	'filter' => array(
				'handler' => 'views_handler_filter_yebab_workflow_state',
			),
		),
		'message' => array(
			'title' => t('Comment'), 
			'help' => t('The node comment'),
			'field' => array(
				'handler' => 'views_handler_field',
				'format' => 2,
				'click sortable' => TRUE,
			),
			'sort' => array(
        'handler' => 'views_handler_sort',
    ),
		),
		'timestamp' => array(
			'title' => t('Date'), 
			'help' => t('The log date'),
			'field' => array(
				'handler' => 'views_handler_field_date',
				'format' => 2,
				'click sortable' => TRUE,
			),
			'sort' => array(
        'handler' => 'views_handler_sort',
      ),
       	'filter' => array(
				'handler' => 'views_handler_filter_date',
			),
    ),
    
		'uid' => array(
			'title' => t('User'), 
			'help' => t('The user'),
 	   'relationship' => array(
      'base' => 'users',
      'base field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Yebab LOG Username'),
    ),
			'sort' => array(
        'handler' => 'views_handler_sort',
     ),
    ),
	);
  return $data;
}

/**
 * Implementation of hook_views_handlers().
 */
function yebab_workflow_views_handlers() {
 return array(  
  'info' => array(
      'path' => drupal_get_path('module', 'yebab_workflow'),
    ),  
	 'handlers' => array( 
      'views_handler_filter_yebab_workflow_state' => array(
      'parent' => 'views_handler_filter_in_operator',
       ),            
	 ),
 );
}


