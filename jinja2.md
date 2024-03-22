# A collection of jinja 2 grammar

## Variables

```jinja
 {{ foo }} - {{ bar }} - {{ baz }}
```

## Filters

{{ foo|filter_name }}

## Comments

```jinja
{# This is a comment #}
    
```

## Control Structures

### Iteration 

```jinja
{% for item in iterable %}
    {{ item }}
{% endfor %}
```
#### Only available inside for loop

loop.index, loop.index0, loop.revindex, loop.revindex0, loop.first, loop.last
loop.length, loop.cycle, loop.depth, loop.depth0, loop.previtem, loop.nextitem,
loop.changed(value)

### Conditionals

```jinja
{% if codition %}
    Cool 
{% elif condition %}
    Kinda Cool
{% else %}
   Not Cool 
{% endif %}
```

## Blocks

```jinja
{% block block_name %}
{% endblock %}
```

## Macros

```jinja
{% macro macro_name(param1, param2) %}
{% endmacro %}
```

### Macros in macros

```jinja
{% macro render_dialog(title, class='dialog') -%}
    <div class="{{ class }}">
        <h2>{{ title }}</h2>
        <div class="contents">
            {{ caller() }}
        </div>
    </div>
{%- endmacro %}

{% call render_dialog('Hello World') %}
    This is a simple dialog rendered by using a macro and
    a call block.
{% endcall %}
```

## Imports

```jinja
{% import "macros.html" as macros %}
```

## Include

```jinja
{% include  "partial_template.html" %}
```

## Assign Variables

```jinja
{% set variable_name = vaule %}
```

## Filters

```jinja 
{% filter upper %}
    This text is now uppercase
{% endfilter %}



