--ACCESS=access content
SELECT DISTINCT bussiness_type_name as name, bussiness_type_tid
FROM (

SELECT field_data_field_bussiness_type.field_bussiness_type_tid AS bussiness_type_tid,
taxonomy_term_data.name AS bussiness_type_name
FROM node
INNER JOIN field_data_field_sp_area ON (node.nid = field_data_field_sp_area.entity_id
                                       AND field_data_field_sp_area.deleted = '0'
                                       AND field_data_field_sp_area.delta = '0')
INNER JOIN field_data_field_bussiness_type ON (node.nid = field_data_field_bussiness_type.entity_id
                                             AND field_data_field_bussiness_type.deleted = '0'
                                             AND field_data_field_bussiness_type.delta = '0')
INNER JOIN taxonomy_term_data ON (field_data_field_bussiness_type.field_bussiness_type_tid = taxonomy_term_data.tid)

WHERE node.status = '1'
      AND node.type IN  ('publicity')
	    AND field_data_field_sp_area.field_sp_area_tid = :area_id

) AS bussiness_types
GROUP BY name