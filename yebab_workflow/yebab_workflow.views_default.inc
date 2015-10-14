<?php

/**
 * Implementation of hook_views_default_views().
 */
function yebab_workflow_views_default_views() {
  ///////////////////////////////////// Yebab workflow settings view /////////////////////////////////////
$view = new view;
$view->name = 'yebab_workflow';
$view->description = '';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'counter' => array(
    'label' => 'الرقم',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'counter_start' => '1',
    'exclude' => 0,
    'id' => 'counter',
    'table' => 'views',
    'field' => 'counter',
    'relationship' => 'none',
  ),
  'title' => array(
    'label' => 'العنوان',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'phpcode' => array(
    'label' => 'الحاله',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<?php

print t($data->yebab_workflow_states_state);

?>',
    'exclude' => 0,
    'id' => 'phpcode',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
  ),
  'state' => array(
    'label' => 'الحاله',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 1,
    'id' => 'state',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'relationship' => 'none',
  ),
  'comment' => array(
    'label' => 'التعليق',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'comment',
    'table' => 'yebab_workflow_states',
    'field' => 'comment',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'created' => array(
    'label' => 'تاريخ الأنشاء',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'date_format' => 'custom',
    'custom_date_format' => 'd / M / Y',
    'exclude' => 0,
    'id' => 'created',
    'table' => 'node',
    'field' => 'created',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'name' => array(
    'label' => 'أسم المستخدم',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_user' => 1,
    'overwrite_anonymous' => 0,
    'anonymous_text' => '',
    'exclude' => 0,
    'id' => 'name',
    'table' => 'users',
    'field' => 'name',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('sorts', array(
  'changed' => array(
    'order' => 'DESC',
    'granularity' => 'second',
    'id' => 'changed',
    'table' => 'node',
    'field' => 'changed',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => 'type_op',
      'label' => 'النوع',
      'use_operator' => 0,
      'identifier' => 'type',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'term_node_tid_depth' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'term_node_tid_depth_op',
      'identifier' => 'term_node_tid_depth',
      'label' => 'التصنيفات',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '3',
    'depth' => '0',
    'id' => 'term_node_tid_depth',
    'table' => 'node',
    'field' => 'term_node_tid_depth',
    'hierarchy' => 1,
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'uid' => array(
    'operator' => 'in',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'uid_op',
      'identifier' => 'uid',
      'label' => 'الاسم',
      'optional' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
  'state' => array(
    'operator' => 'in',
    'value' => array(
      'needs improvement' => 'needs improvement',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('header', '<b>مرفوض </b><br /> <br />
<?php

  $count = db_result(db_query("SELECT COUNT(*) FROM {node} inner join {yebab_workflow_states} using (nid) WHERE state=\'%s\' AND language = \'ar\' ", \'rejected\'));
   $view = views_get_current_view();
   print  \' عدد المحالات: \'. count($view->result) .   \' من  \' . $count; 
?>
');
$handler->override_option('header_format', '3');
$handler->override_option('header_empty', 0);
$handler->override_option('items_per_page', 50);
$handler->override_option('use_pager', '1');
$handler->override_option('style_plugin', 'bulk');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 0,
  'order' => 'asc',
  'columns' => array(
    'counter' => 'counter',
    'title' => 'title',
    'phpcode' => 'phpcode',
    'state' => 'state',
    'comment' => 'comment',
    'created' => 'created',
    'name' => 'name',
    'delete_node' => 'delete_node',
  ),
  'info' => array(
    'counter' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'phpcode' => array(
      'separator' => '',
    ),
    'state' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'comment' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'delete_node' => array(
      'separator' => '',
    ),
  ),
  'default' => '-1',
  'execution_type' => '1',
  'display_type' => '0',
  'hide_select_all' => 0,
  'skip_confirmation' => 1,
  'display_result' => 1,
  'merge_single_action' => 1,
  'selected_operations' => array(
    'views_bulk_operations_delete_node_action' => 'views_bulk_operations_delete_node_action',
    'node_publish_action' => 'node_publish_action',
    'node_unpublish_action' => 'node_unpublish_action',
    'token_actions_message_action' => 0,
    'views_bulk_operations_action' => 0,
    'views_bulk_operations_script_action' => 0,
    'views_bulk_operations_fields_action' => 0,
    'views_bulk_operations_taxonomy_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'image_operations_rebuild' => 0,
    'token_actions_goto_action' => 0,
    'token_actions_send_email_action' => 0,
    'pathauto_node_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0' => 0,
    'node_unpublish_by_keyword_action' => 0,
    'system_send_email_action' => 0,
    'node_save_action' => 0,
    'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 0,
    'node_unpromote_action' => 0,
    'node_make_unsticky_action' => 0,
    'node_mass_update:a27b9efabcd054685a549378b174ad11' => 0,
    'system_message_action' => 0,
    'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 0,
    'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 0,
    'node_make_sticky_action' => 0,
    'node_promote_action' => 0,
    'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 0,
    'node_assign_owner_action' => 0,
    'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 0,
    'system_goto_action' => 0,
  ),
  'views_bulk_operations_fields_action' => array(
    'php_code' => 0,
    'display_fields' => array(
      '_all_' => '_all_',
    ),
  ),
));
$handler = $view->new_display('page', 'الصفحة', 'page_1');
$handler->override_option('fields', array(
  'phpcode' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<?php
$out = \' \';
$out .= \'<br /><b>عدد المحلات المنشوره و المضافه: </b><br />\';

print ($out);

?>',
    'exclude' => 0,
    'id' => 'phpcode',
    'table' => 'customfield',
    'field' => 'phpcode',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('title', 'التحكم بالمحلات المجانيه');
$handler->override_option('header', '');
$handler->override_option('items_per_page', 1);
$handler->override_option('style_plugin', 'default');
$handler->override_option('style_options', array());
$handler->override_option('path', 'submitted-articles');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->override_option('style_plugin', 'xls');
$handler->override_option('style_options', array(
  'mission_description' => FALSE,
  'description' => '',
));
$handler->override_option('row_plugin', '');
$handler->override_option('path', 'path/to/xls');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
$handler->override_option('sitename_title', FALSE);
$handler = $view->new_display('attachment', 'المرفق', 'attachment_1');
$handler->override_option('fields', array(
  'phpcode' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<?php
$header = array();
$rows = array();

$out = \' \';
$header = array (t(\'Month\'), t(\'Added pages\'), t(\'Published pages\'));
$view = views_get_current_view();
$months = array (
  1 => t(\'January\'),
  2 => t(\'February\'),
  3 => t(\'March\'),
  4 => t(\'April\'),
  5 => t(\'May\'),
  6 => t(\'June\'),
  7 => t(\'July\'),
  8 => t(\'August\'),
  9 => t(\'September\'),
  10 => t(\'October\'),
  11 => t(\'November\'),
  12 => t(\'December\'),
);

$year = date(\'Y\');

if(isset($view->exposed_input[\'uid\']) && $view->exposed_input[\'uid\'] != NULL ) {
   $user = user_load(array(\'name\' =>$view->exposed_input[\'uid\']));
   $user_query = "AND n.uid= $user->uid";
  
}

if(isset($view->exposed_input[\'created\'][\'min\'][\'month\']) && isset($view->exposed_input[\'created\'][\'max\'][\'month\'])) {
 for($j = $view->exposed_input[\'created\'][\'min\'][\'year\'] ; $j <= $view->exposed_input[\'created\'][\'max\'][\'year\'] ; $j++) {
   for($i = $view->exposed_input[\'created\'][\'min\'][\'month\'] ; $i <= $view->exposed_input[\'created\'][\'max\'][\'month\'] ; $i++) {
    $created = db_result(db_query(
      "SELECT  COUNT(n.nid)  
       FROM  {node} n
       INNER JOIN {shop_node} s
       USING (nid)
       WHERE FROM_UNIXTIME(n.created, \'%c\') = %d
       AND FROM_UNIXTIME(n.created, \'%Y\') =  $j
       AND n.type=\'yebab_shop\' 
       AND s.shop_type = 1  $user_query
       AND $i"));

    $published = db_result(db_query(
     "SELECT COUNT(n.nid)
      FROM  {node} n 
      INNER JOIN {yebab_workflow_states} y USING (nid)
      INNER JOIN {shop_node} s USING (nid)
      WHERE n.type=\'yebab_shop\' 
      AND s.shop_type = 1
      AND FROM_UNIXTIME(last_publish_date, \'%Y\') =  $j
      AND FROM_UNIXTIME(last_publish_date, \'%c\') = %d
      AND last_publish_date > 0  $user_query
      ", $i));
   $rows[] = array($months[$i] . \' - \'. $j, $created, $published);
   }
  }
}

elseif (!isset($view->exposed_input[\'created\'][\'min\'][\'month\']) && !isset($view->exposed_input[\'created\'][\'max\'][\'month\'])) {
  for ($i= 1; $i<= 12 ; $i++) {
    $created = db_result(db_query(
      "SELECT  COUNT(n.nid)  
       FROM  {node} n
       INNER JOIN {shop_node} s
       USING (nid)
       WHERE FROM_UNIXTIME(n.created, \'%Y\') =  $year
       AND FROM_UNIXTIME(n.created, \'%c\') = %d
       AND n.type=\'yebab_shop\' 
       AND s.shop_type = 1  $user_query
       ", $i));

    $published = db_result(db_query(
     "SELECT COUNT(n.nid)
      FROM  {node} n 
      INNER JOIN {yebab_workflow_states} y USING (nid)
      INNER JOIN {shop_node} s USING (nid)
      WHERE n.type=\'yebab_shop\' 
      AND s.shop_type = 1
      AND FROM_UNIXTIME(last_publish_date, \'%Y\') = $year
      AND FROM_UNIXTIME(last_publish_date, \'%c\') = %d
      AND last_publish_date > 0  $user_query
      ", $i));
   $rows[] = array($months[$i], $created, $published);
  }
}

$out .= theme( \'table\', $header, $rows);


print ($out);

?>',
    'exclude' => 0,
    'id' => 'phpcode',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Use default',
    ),
  ),
));
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => 'type_op',
      'label' => 'النوع',
      'use_operator' => 0,
      'identifier' => 'type',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'term_node_tid_depth' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'term_node_tid_depth_op',
      'identifier' => 'term_node_tid_depth',
      'label' => 'التصنيفات',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '3',
    'depth' => '0',
    'id' => 'term_node_tid_depth',
    'table' => 'node',
    'field' => 'term_node_tid_depth',
    'hierarchy' => 1,
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'uid' => array(
    'operator' => 'in',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'uid_op',
      'identifier' => 'uid',
      'label' => 'الاسم',
      'optional' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
));
$handler->override_option('header', '');
$handler->override_option('items_per_page', 1);
$handler->override_option('style_plugin', 'default');
$handler->override_option('style_options', array());
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', TRUE);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', FALSE);
$handler->override_option('render_pager', TRUE);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
$handler = $view->new_display('attachment', 'المرفق', 'attachment_2');
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => 'type_op',
      'label' => 'النوع',
      'use_operator' => 0,
      'identifier' => 'type',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'term_node_tid_depth' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'term_node_tid_depth_op',
      'identifier' => 'term_node_tid_depth',
      'label' => 'التصنيفات',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '3',
    'depth' => '0',
    'id' => 'term_node_tid_depth',
    'table' => 'node',
    'field' => 'term_node_tid_depth',
    'hierarchy' => 1,
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'uid' => array(
    'operator' => 'in',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'uid_op',
      'identifier' => 'uid',
      'label' => 'الاسم',
      'optional' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
  'state' => array(
    'operator' => 'in',
    'value' => array(
      'pending' => 'pending',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('header', '<b>بإنتظار المراجعة  </b><br /> <br />
<?php

  $count = db_result(db_query("SELECT COUNT(*) FROM {node} inner join {yebab_workflow_states} using (nid)  WHERE state=\'%s\' AND language = \'ar\' ", \'pending\'));
   $view = views_get_current_view();
   print  \' عدد المحالات: \'. count($view->result) .   \' من  \' . $count; 
?>
');
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', 0);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', 1);
$handler->override_option('render_pager', 1);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
$handler = $view->new_display('attachment', 'المرفق', 'attachment_3');
$handler->override_option('header', '<b>تعديلات مطلوبه </b><br /> <br />
<?php
  $count = db_result(db_query("SELECT COUNT(*) FROM {node} inner join {yebab_workflow_states} using (nid)  WHERE state=\'%s\' AND language = \'ar\'", \'needs improvement\'));
   $view = views_get_current_view();
   print  \' عدد المحالات: \'. count($view->result) .   \' من  \' . $count; 
?>
');
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array());
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', 0);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', 1);
$handler->override_option('render_pager', TRUE);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
$handler = $view->new_display('attachment', 'المرفق', 'attachment_4');
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => 'type_op',
      'label' => 'النوع',
      'use_operator' => 0,
      'identifier' => 'type',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'term_node_tid_depth' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'term_node_tid_depth_op',
      'identifier' => 'term_node_tid_depth',
      'label' => 'التصنيفات',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '3',
    'depth' => '0',
    'id' => 'term_node_tid_depth',
    'table' => 'node',
    'field' => 'term_node_tid_depth',
    'hierarchy' => 1,
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'uid' => array(
    'operator' => 'in',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'uid_op',
      'identifier' => 'uid',
      'label' => 'الاسم',
      'optional' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
  'state' => array(
    'operator' => 'in',
    'value' => array(
      'rejected' => 'rejected',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 0,
  'order' => 'asc',
  'columns' => array(
    'counter' => 'counter',
    'title' => 'title',
    'phpcode' => 'phpcode',
    'state' => 'state',
    'comment' => 'comment',
    'created' => 'created',
    'name' => 'name',
  ),
  'info' => array(
    'counter' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'phpcode' => array(
      'separator' => '',
    ),
    'state' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'comment' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  ),
  'default' => '-1',
  'execution_type' => '1',
  'display_type' => '0',
  'hide_select_all' => 0,
  'skip_confirmation' => 0,
  'display_result' => 1,
  'merge_single_action' => 1,
  'selected_operations' => array(
    'views_bulk_operations_delete_node_action' => 'views_bulk_operations_delete_node_action',
    'node_publish_action' => 'node_publish_action',
    'node_unpublish_action' => 'node_unpublish_action',
    'token_actions_message_action' => 0,
    'views_bulk_operations_action' => 0,
    'views_bulk_operations_script_action' => 0,
    'views_bulk_operations_fields_action' => 0,
    'views_bulk_operations_taxonomy_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'image_operations_rebuild' => 0,
    'token_actions_goto_action' => 0,
    'token_actions_send_email_action' => 0,
    'pathauto_node_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0' => 0,
    'node_unpublish_by_keyword_action' => 0,
    'system_send_email_action' => 0,
    'node_save_action' => 0,
    'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 0,
    'node_unpromote_action' => 0,
    'node_make_unsticky_action' => 0,
    'node_mass_update:a27b9efabcd054685a549378b174ad11' => 0,
    'system_message_action' => 0,
    'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 0,
    'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 0,
    'node_make_sticky_action' => 0,
    'node_promote_action' => 0,
    'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 0,
    'node_assign_owner_action' => 0,
    'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 0,
    'system_goto_action' => 0,
  ),
  'views_bulk_operations_fields_action' => array(
    'php_code' => 0,
    'display_fields' => array(
      '_all_' => '_all_',
    ),
  ),
));
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', 0);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', 1);
$handler->override_option('render_pager', TRUE);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
$handler = $view->new_display('attachment', 'المرفق', 'attachment_5');
$handler->override_option('fields', array(
  'counter' => array(
    'label' => 'الرقم',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'counter_start' => '1',
    'exclude' => 0,
    'id' => 'counter',
    'table' => 'views',
    'field' => 'counter',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'title' => array(
    'label' => 'العنوان',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'phpcode' => array(
    'label' => 'الحالة',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<?php

print t($data->yebab_workflow_states_state);

?>',
    'exclude' => 0,
    'id' => 'phpcode',
    'table' => 'customfield',
    'field' => 'phpcode',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'state' => array(
    'label' => 'الحالة',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 1,
    'id' => 'state',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'comment' => array(
    'label' => 'التعليق',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'comment',
    'table' => 'yebab_workflow_states',
    'field' => 'comment',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'created' => array(
    'label' => 'تاريخ الأنشاء',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'date_format' => 'custom',
    'custom_date_format' => 'd / M / Y',
    'exclude' => 0,
    'id' => 'created',
    'table' => 'node',
    'field' => 'created',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'name' => array(
    'label' => 'أسم المستخدم',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_user' => 1,
    'overwrite_anonymous' => 0,
    'anonymous_text' => '',
    'exclude' => 0,
    'id' => 'name',
    'table' => 'users',
    'field' => 'name',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('filters', array(
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => 'type_op',
      'label' => 'النوع',
      'use_operator' => 0,
      'identifier' => 'type',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'term_node_tid_depth' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'term_node_tid_depth_op',
      'identifier' => 'term_node_tid_depth',
      'label' => 'التصنيفات',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'type' => 'select',
    'limit' => TRUE,
    'vid' => '3',
    'depth' => '0',
    'id' => 'term_node_tid_depth',
    'table' => 'node',
    'field' => 'term_node_tid_depth',
    'hierarchy' => 1,
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'uid' => array(
    'operator' => 'in',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'uid_op',
      'identifier' => 'uid',
      'label' => 'الاسم',
      'optional' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
  'state' => array(
    'operator' => 'in',
    'value' => array(
      'published' => 'published',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('header', '<b>منشور</b><br /> <br />

<?php

  $count = db_result(db_query("SELECT COUNT(*) FROM {node} inner join {yebab_workflow_states} using (nid) WHERE state=\'%s\' AND language = \'ar\' ", \'published\'));
   $view = views_get_current_view();
   print  \' عدد المحالات: \'. count($view->result) .   \' من  \' . $count; 
?>
');
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array());
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', 0);
$handler->override_option('inherit_exposed_filters', 1);
$handler->override_option('inherit_pager', 1);
$handler->override_option('render_pager', 1);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));

$views[$view->name] = $view;

///////////////////////////////// Moderator views /////////////////////////////////
$view = new view;
$view->name = 'yebab_workflow_moderator';
$view->description = '';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'counter' => array(
    'label' => 'الرقم',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'counter_start' => '1',
    'exclude' => 0,
    'id' => 'counter',
    'table' => 'views',
    'field' => 'counter',
    'relationship' => 'none',
  ),
  'title' => array(
    'label' => 'العنوان',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'state' => array(
    'label' => 'الحاله',
    'alter' => array(
      'alter_text' => 1,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => 'لا يوجد',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 1,
    'id' => 'state',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'relationship' => 'none',
  ),
  'phpcode' => array(
    'label' => 'الحالة',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<?php

print t($data->yebab_workflow_states_state);

?>',
    'exclude' => 0,
    'id' => 'phpcode',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
  ),
  'comment' => array(
    'label' => 'التعليق',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'comment',
    'table' => 'yebab_workflow_states',
    'field' => 'comment',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'created' => array(
    'label' => 'تاريخ الإضافه',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'date_format' => 'custom',
    'custom_date_format' => 'd / M / Y',
    'exclude' => 0,
    'id' => 'created',
    'table' => 'node',
    'field' => 'created',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
));
$handler->override_option('sorts', array(
  'state' => array(
    'order' => 'DESC',
    'id' => 'state',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'relationship' => 'none',
  ),
  'changed' => array(
    'order' => 'DESC',
    'granularity' => 'second',
    'id' => 'changed',
    'table' => 'node',
    'field' => 'changed',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'uid' => array(
    'default_action' => 'default',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'الكل',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'current_user',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '4' => 0,
      '5' => 0,
      '3' => 0,
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_fixed' => '',
    'default_argument_user' => 0,
    'default_argument_image_size' => '_original',
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'image' => 0,
      'webform_report' => 0,
      'yebab_user_album' => 0,
      'yebab_blog' => 0,
      'yebab_hotel' => 0,
      'yebab_venue' => 0,
      'yebab_budget' => 0,
      'yebab_donation' => 0,
      'yebab_schedule_plan' => 0,
      'yebab_shop' => 0,
      'date' => 0,
      'page' => 0,
      'simplenews' => 0,
      'webform' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '8' => 0,
      '9' => 0,
      '1' => 0,
      '5' => 0,
      '3' => 0,
      '6' => 0,
      '7' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'image_size' => array(
      '_original' => '_original',
      'thumbnail' => 'thumbnail',
      'preview' => 'preview',
    ),
    'validate_argument_php' => '',
  ),
));
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'state_1' => array(
    'operator' => 'in',
    'value' => array(
      'pending' => 'pending',
      'published' => 'published',
      'rejected' => 'rejected',
      'needs improvement' => 'needs improvement',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state_1',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'role',
  'role' => array(
    '5' => 5,
  ),
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('header', '<b>منشور</b><br /> <br />

<?php
  $view = views_get_current_view();
  print \' عدد المحالات: \'. count($view->result); //$view->total_rows; 
?>
');
$handler->override_option('header_format', '3');
$handler->override_option('header_empty', 0);
$handler->override_option('items_per_page', 100);
$handler->override_option('use_pager', '1');
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 0,
  'sticky' => 0,
  'order' => 'asc',
  'columns' => array(
    'counter' => 'counter',
    'title' => 'title',
    'state' => 'state',
    'comment' => 'comment',
    'created' => 'created',
  ),
  'info' => array(
    'counter' => array(
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'state' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'comment' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  ),
  'default' => '-1',
));
$handler = $view->new_display('page', 'الصفحة', 'page_1');
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'state_1' => array(
    'operator' => 'in',
    'value' => array(
      'pending' => 'pending',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state_1',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('header', '<b>بإنتظار المراجعة </b><br /> <br />
<?php
  $view = views_get_current_view();
  print \' عدد المحالات: \'. $view->total_rows; 
?>
');
$handler->override_option('path', 'articles-states');
$handler->override_option('menu', array(
  'type' => 'normal',
  'title' => 'Free Pages Status',
  'description' => '',
  'weight' => '50',
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler = $view->new_display('attachment', 'المرفق', 'attachment_1');
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'state_1' => array(
    'operator' => 'in',
    'value' => array(
      'needs improvement' => 'needs improvement',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state_1',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('title', 'تعديلات مطلوبة');
$handler->override_option('header', '<b>تعديلات مطلوبة </b><br /> <br />

<?php

  $view = views_get_current_view();
  
print \' عدد المحالات: \'. count($view->result); //$view->total_rows; 
?>
');
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', TRUE);
$handler->override_option('inherit_exposed_filters', FALSE);
$handler->override_option('inherit_pager', FALSE);
$handler->override_option('render_pager', TRUE);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
$handler = $view->new_display('attachment', 'المرفق', 'attachment_2');
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'state_1' => array(
    'operator' => 'in',
    'value' => array(
      'rejected' => 'rejected',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state_1',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('header', '<b>مرفوض </b><br /> <br />

<?php
  $view = views_get_current_view();
  print \' عدد المحالات: \'. count($view->result); //$view->total_rows; 
?>
');
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', TRUE);
$handler->override_option('inherit_exposed_filters', FALSE);
$handler->override_option('inherit_pager', FALSE);
$handler->override_option('render_pager', TRUE);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
$handler = $view->new_display('attachment', 'المرفق', 'attachment_3');
$handler->override_option('filters', array(
  'type_1' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_1',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'state_1' => array(
    'operator' => 'in',
    'value' => array(
      'published' => 'published',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'state_1',
    'table' => 'yebab_workflow_states',
    'field' => 'state',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('attachment_position', 'after');
$handler->override_option('inherit_arguments', TRUE);
$handler->override_option('inherit_exposed_filters', FALSE);
$handler->override_option('inherit_pager', FALSE);
$handler->override_option('render_pager', TRUE);
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
 $views[$view->name] = $view;
//////////////////////////////////////////////// Yebab workflow log view //////////////////////////////////////
$view = new view;
$view->name = 'yebab_workflow_log';
$view->description = '';
$view->tag = '';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('relationships', array(
  'uid' => array(
    'label' => 'Yebab LOG Username',
    'required' => 1,
    'id' => 'uid',
    'table' => 'yebab_workflow_log',
    'field' => 'uid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('fields', array(
  'counter' => array(
    'label' => 'الرقم',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'counter_start' => '1',
    'exclude' => 0,
    'id' => 'counter',
    'table' => 'views',
    'field' => 'counter',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'title' => array(
    'label' => 'العنوان',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'timestamp' => array(
    'label' => 'التاريخ',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'date_format' => 'custom',
    'custom_date_format' => 'd / M / Y',
    'exclude' => 0,
    'id' => 'timestamp',
    'table' => 'yebab_workflow_log',
    'field' => 'timestamp',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'message' => array(
    'label' => 'التعليق',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 1,
      'max_length' => '150',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 0,
    'id' => 'message',
    'table' => 'yebab_workflow_log',
    'field' => 'message',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'state_1' => array(
    'label' => 'الحاله',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'exclude' => 1,
    'id' => 'state_1',
    'table' => 'yebab_workflow_log',
    'field' => 'state',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'name' => array(
    'label' => 'الاسم',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_user' => 1,
    'overwrite_anonymous' => 0,
    'anonymous_text' => '',
    'exclude' => 0,
    'id' => 'name',
    'table' => 'users',
    'field' => 'name',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'uid',
  ),
  'type' => array(
    'label' => 'النوع',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'link_to_node' => 0,
    'machine_name' => 0,
    'exclude' => 0,
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'phpcode' => array(
    'label' => 'الحالة',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'link_class' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'target' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
      'strip_tags' => 0,
    ),
    'empty' => '',
    'hide_empty' => 0,
    'empty_zero' => 0,
    'value' => '<?php

print t($data->yebab_workflow_log_state);

?>',
    'exclude' => 0,
    'id' => 'phpcode',
    'table' => 'customfield',
    'field' => 'phpcode',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('sorts', array(
  'changed' => array(
    'order' => 'DESC',
    'granularity' => 'second',
    'id' => 'changed',
    'table' => 'node',
    'field' => 'changed',
    'relationship' => 'none',
  ),
));
$handler->override_option('filters', array(
  'timestamp' => array(
    'operator' => 'between',
    'value' => array(
      'type' => 'date',
      'value' => '',
      'min' => '',
      'max' => '',
    ),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'timestamp_op',
      'identifier' => 'timestamp',
      'label' => 'التاريخ',
      'optional' => 1,
      'remember' => 0,
    ),
    'id' => 'timestamp',
    'table' => 'yebab_workflow_log',
    'field' => 'timestamp',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'uid' => array(
    'operator' => 'in',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'uid_op',
      'identifier' => 'uid',
      'label' => 'الاسم',
      'optional' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'uid',
  ),
  'state' => array(
    'operator' => 'in',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'state_op',
      'identifier' => 'state',
      'label' => 'State',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'state',
    'table' => 'yebab_workflow_log',
    'field' => 'state',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'type' => array(
    'operator' => 'in',
    'value' => array(
      'yebab_shop' => 'yebab_shop',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => 'type_op',
      'label' => 'النوع',
      'use_operator' => 0,
      'identifier' => 'type',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'relationship' => 'none',
  ),
  'shop_type' => array(
    'operator' => '=',
    'value' => '1',
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'shop_type',
    'table' => 'shop_node',
    'field' => 'shop_type',
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('header', '<?php
  $view = views_get_current_view();
  print \'عدد النتائج:\'. $view->total_rows; 
?>
');
$handler->override_option('header_format', '3');
$handler->override_option('header_empty', 0);
$handler->override_option('items_per_page', 50);
$handler->override_option('use_pager', '1');
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 0,
  'order' => 'asc',
  'columns' => array(
    'title' => 'title',
    'timestamp' => 'timestamp',
    'message' => 'message',
    'state_1' => 'state_1',
  ),
  'info' => array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'timestamp' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'message' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'state_1' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  ),
  'default' => '-1',
));
$handler = $view->new_display('page', 'الصفحة', 'page_1');
$handler->override_option('path', 'workflow-log');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->override_option('style_plugin', 'xls');
$handler->override_option('style_options', array(
  'mission_description' => FALSE,
  'description' => '',
  'filename' => 'view-%view.xls',
));
$handler->override_option('row_plugin', '');
$handler->override_option('path', 'path/excel');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('displays', array(
  'page_1' => 'page_1',
  'default' => 0,
));
$handler->override_option('sitename_title', FALSE);

 $views[$view->name] = $view;
  return $views;
}
