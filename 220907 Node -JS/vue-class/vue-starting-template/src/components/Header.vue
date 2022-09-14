//컴포넌트 만들라고 하면 이렇게 만들기 

<template>
  <div>
  <h1>Header</h1>
     <Search/>
    <Navigation/>
  </div>
</template>

<script>
"./Search.vue"
import Search from"./Search";
import Navigation from"./Navigation";
export default {
  components: {
  Search,Navigation
  }


}

</script>


<style scoped>
</style>